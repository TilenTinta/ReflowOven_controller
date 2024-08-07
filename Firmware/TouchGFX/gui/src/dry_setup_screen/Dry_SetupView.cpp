#include <gui/dry_setup_screen/Dry_SetupView.hpp>

Dry_SetupView::Dry_SetupView()
{

}

void Dry_SetupView::setupScreen()
{
	// Set current temperature
	Unicode::snprintf(txtDryTempBuffer, TXTDRYTEMP_SIZE, "%d", dryPreset.dryTemp);
	txtDryTemp.invalidate();

	uint8_t hours = floor(dryPreset.dryTime / 60);
	Unicode::snprintf(txtDryTimeHBuffer, TXTDRYTIMEH_SIZE, "%d", hours);
	txtDryTimeH.invalidate();

	uint8_t minutes = dryPreset.dryTime - (hours * 60);
	Unicode::snprintf(txtDryTimeMinBuffer, TXTDRYTIMEMIN_SIZE, "%d", minutes);
	txtDryTimeMin.invalidate();

    Dry_SetupViewBase::setupScreen();
}

void Dry_SetupView::tearDownScreen()
{
    Dry_SetupViewBase::tearDownScreen();
}


// Increase drying temperature
void Dry_SetupView::TempUp()
{
	if (dryPreset.dryTemp < 280) dryPreset.dryTemp ++;

	Unicode::snprintf(txtDryTempBuffer, TXTDRYTEMP_SIZE, "%d", dryPreset.dryTemp);
	txtDryTemp.invalidate();
}

// Decrease drying temperature
void Dry_SetupView::TempDn()
{
	if (dryPreset.dryTemp > 0) dryPreset.dryTemp --;

	Unicode::snprintf(txtDryTempBuffer, TXTDRYTEMP_SIZE, "%d", dryPreset.dryTemp);
	txtDryTemp.invalidate();
}

// Increase drying time
void Dry_SetupView::TimeUp()
{
	if (dryPreset.dryTime < 7200) dryPreset.dryTime += 15; // in minutes (max. 5 days)

	uint8_t hours = floor(dryPreset.dryTime / 60);
	Unicode::snprintf(txtDryTimeHBuffer, TXTDRYTIMEH_SIZE, "%d", hours);
	txtDryTimeH.invalidate();

	uint8_t minutes = dryPreset.dryTime - (hours * 60);
	Unicode::snprintf(txtDryTimeMinBuffer, TXTDRYTIMEMIN_SIZE, "%d", minutes);
	txtDryTimeMin.invalidate();
}

// Decrease drying time
void Dry_SetupView::TimeDn()
{
	if (dryPreset.dryTime > 15) dryPreset.dryTime -= 15;

	uint8_t hours = floor(dryPreset.dryTime / 60);
	Unicode::snprintf(txtDryTimeHBuffer, TXTDRYTIMEH_SIZE, "%d", hours);
	txtDryTimeH.invalidate();

	uint8_t minutes = dryPreset.dryTime - (hours * 60);
	Unicode::snprintf(txtDryTimeMinBuffer, TXTDRYTIMEMIN_SIZE, "%d", minutes);
	txtDryTimeMin.invalidate();
}

// Save values
void Dry_SetupView::SavePreset()
{
	// TODO: save to flash
	// ...

	ovenParameters.lastUsedMode = 1;
	ovenParameters.deviceState = STATE_DRY;

}
