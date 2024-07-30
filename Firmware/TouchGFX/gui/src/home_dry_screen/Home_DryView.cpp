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
