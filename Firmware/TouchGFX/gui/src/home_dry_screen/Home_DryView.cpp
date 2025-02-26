#include <gui/home_dry_screen/Home_DryView.hpp>

Home_DryView::Home_DryView()
{

}

void Home_DryView::setupScreen()
{
	// Temperature preset
	Unicode::snprintf(txtDryTempSetBuffer, TXTDRYTEMPSET_SIZE, "%d", dryPreset.dryTemp);
	txtDryTempSet.invalidate();

	// Time preset - hours
	uint8_t hours = floor(dryPreset.dryTime / 60);
	Unicode::snprintf(txtDryTimeHSetBuffer, TXTDRYTIMEHSET_SIZE, "%d", hours);
	txtDryTimeHSet.invalidate();

	// Time preset - minutes
	uint8_t minutes = dryPreset.dryTime - (hours * 60);
	Unicode::snprintf(txtDryTimeMinSetBuffer, TXTDRYTIMEMINSET_SIZE, "%d", minutes);
	txtDryTimeMinSet.invalidate();

	// Button START / STOP
	btnDryStart.setVisible(!ovenParameters.startStop);
	btnDryStart.invalidate();
	btnDryStop.setVisible(ovenParameters.startStop);
	btnDryStop.invalidate();

    Home_DryViewBase::setupScreen();
}

void Home_DryView::tearDownScreen()
{
    Home_DryViewBase::tearDownScreen();
}


// Live set value - temperature
void Home_DryView::setTEMP(float temperatureProbe)
{
	Unicode::snprintfFloat(txtCurTempBuffer, TXTCURTEMP_SIZE, "%.2f", temperatureProbe);
	txtCurTemp.invalidate();

	// Set state of START/STOP button to it's right state (to be triggered at the end of drying)
	if (ovenParameters.startStop != startStopOld)
	{
		btnDryStart.setVisible(!ovenParameters.startStop);
		btnDryStart.invalidate();
		btnDryStop.setVisible(ovenParameters.startStop);
		btnDryStop.invalidate();

		startStopOld = ovenParameters.startStop ;
	}
}

// Live set value - time left
void Home_DryView::setTIMELEFT(int time)
{
	uint8_t hours = floor(time / 60);
	Unicode::snprintf(txtTimeHLeftBuffer, TXTTIMEHLEFT_SIZE, "%d", hours);
	txtTimeHLeft.invalidate();

	uint8_t minutes = time - (hours * 60);
	Unicode::snprintf(txtTimeMinLeftBuffer, TXTTIMEMINLEFT_SIZE, "%d", minutes);
	txtTimeMinLeft.invalidate();
}

// Start drying cycle
void Home_DryView::StartDrying()
{
	ovenParameters.startStop = 1;
//	btnDryStart.setVisible(0);
//	btnDryStart.invalidate();
//	btnDryStop.setVisible(1);
//	btnDryStop.invalidate();
}

// Stop drying cycle
void Home_DryView::StopDrying()
{
	ovenParameters.startStop = 0;
//	btnDryStart.setVisible(1);
//	btnDryStart.invalidate();
//	btnDryStop.setVisible(0);
//	btnDryStop.invalidate();
}
