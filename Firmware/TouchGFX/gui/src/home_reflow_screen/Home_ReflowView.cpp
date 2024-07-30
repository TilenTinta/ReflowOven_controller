#include <gui/home_reflow_screen/Home_ReflowView.hpp>

Home_ReflowView::Home_ReflowView()
{

}

void Home_ReflowView::setupScreen()
{
	switch(ovenParameters.profileNoSelected)
	{
	case 1:
		// Ramp 1
		Unicode::snprintf(txtRamp1TempSetBuffer, TXTRAMP1TEMPSET_SIZE, "%d", reflowProfiles.profile1Temp[0]);
		txtRamp1TempSet.invalidate();
		Unicode::snprintf(txtRamp1TimeSetBuffer, TXTRAMP1TIMESET_SIZE, "%d", reflowProfiles.profile1Time[0]);
		txtRamp1TempSet.invalidate();
		// Soak
		Unicode::snprintf(txtSoakTempSetBuffer, TXTSOAKTEMPSET_SIZE, "%d", reflowProfiles.profile1Temp[1]);
		txtSoakTempSet.invalidate();
		Unicode::snprintf(txtSoakTimeSetBuffer, TXTSOAKTIMESET_SIZE, "%d", reflowProfiles.profile1Time[1]);
		txtSoakTempSet.invalidate();
		// Ramp 2
		Unicode::snprintf(txtRamp2TempSetBuffer, TXTRAMP2TEMPSET_SIZE, "%d", reflowProfiles.profile1Temp[2]);
		txtRamp2TempSet.invalidate();
		Unicode::snprintf(txtRamp2TimeSetBuffer, TXTRAMP2TIMESET_SIZE, "%d", reflowProfiles.profile1Time[2]);
		txtRamp2TempSet.invalidate();
		// Reflow
		Unicode::snprintf(txtReflowTempSetBuffer, TXTREFLOWTEMPSET_SIZE, "%d", reflowProfiles.profile1Temp[3]);
		txtReflowTempSet.invalidate();
		Unicode::snprintf(txtReflowTimeSetBuffer, TXTREFLOWTIMESET_SIZE, "%d", reflowProfiles.profile1Time[3]);
		txtReflowTempSet.invalidate();
		// Cooling
		Unicode::snprintf(txtCoolingTempSetBuffer, TXTCOOLINGTEMPSET_SIZE, "%d", reflowProfiles.profile1Temp[4]);
		txtCoolingTempSet.invalidate();
		Unicode::snprintf(txtCoolingTimeSetBuffer, TXTCOOLINGTIMESET_SIZE, "%d", reflowProfiles.profile1Time[4]);
		txtCoolingTempSet.invalidate();

		break;
	case 2:
		// Ramp 1
		Unicode::snprintf(txtRamp1TempSetBuffer, TXTRAMP1TEMPSET_SIZE, "%d", reflowProfiles.profile2Temp[0]);
		txtRamp1TempSet.invalidate();
		Unicode::snprintf(txtRamp1TimeSetBuffer, TXTRAMP1TIMESET_SIZE, "%d", reflowProfiles.profile2Time[0]);
		txtRamp1TempSet.invalidate();
		// Soak
		Unicode::snprintf(txtSoakTempSetBuffer, TXTSOAKTEMPSET_SIZE, "%d", reflowProfiles.profile2Temp[1]);
		txtSoakTempSet.invalidate();
		Unicode::snprintf(txtSoakTimeSetBuffer, TXTSOAKTIMESET_SIZE, "%d", reflowProfiles.profile2Time[1]);
		txtSoakTempSet.invalidate();
		// Ramp 2
		Unicode::snprintf(txtRamp2TempSetBuffer, TXTRAMP2TEMPSET_SIZE, "%d", reflowProfiles.profile2Temp[2]);
		txtRamp2TempSet.invalidate();
		Unicode::snprintf(txtRamp2TimeSetBuffer, TXTRAMP2TIMESET_SIZE, "%d", reflowProfiles.profile2Time[2]);
		txtRamp2TempSet.invalidate();
		// Reflow
		Unicode::snprintf(txtReflowTempSetBuffer, TXTREFLOWTEMPSET_SIZE, "%d", reflowProfiles.profile2Temp[3]);
		txtReflowTempSet.invalidate();
		Unicode::snprintf(txtReflowTimeSetBuffer, TXTREFLOWTIMESET_SIZE, "%d", reflowProfiles.profile2Time[3]);
		txtReflowTempSet.invalidate();
		// Cooling
		Unicode::snprintf(txtCoolingTempSetBuffer, TXTCOOLINGTEMPSET_SIZE, "%d", reflowProfiles.profile2Temp[4]);
		txtCoolingTempSet.invalidate();
		Unicode::snprintf(txtCoolingTimeSetBuffer, TXTCOOLINGTIMESET_SIZE, "%d", reflowProfiles.profile2Time[4]);
		txtCoolingTempSet.invalidate();
		break;
	case 3:
		// Ramp 1
		Unicode::snprintf(txtRamp1TempSetBuffer, TXTRAMP1TEMPSET_SIZE, "%d", reflowProfiles.profile3Temp[0]);
		txtRamp1TempSet.invalidate();
		Unicode::snprintf(txtRamp1TimeSetBuffer, TXTRAMP1TIMESET_SIZE, "%d", reflowProfiles.profile3Time[0]);
		txtRamp1TempSet.invalidate();
		// Soak
		Unicode::snprintf(txtSoakTempSetBuffer, TXTSOAKTEMPSET_SIZE, "%d", reflowProfiles.profile3Temp[1]);
		txtSoakTempSet.invalidate();
		Unicode::snprintf(txtSoakTimeSetBuffer, TXTSOAKTIMESET_SIZE, "%d", reflowProfiles.profile3Time[1]);
		txtSoakTempSet.invalidate();
		// Ramp 2
		Unicode::snprintf(txtRamp2TempSetBuffer, TXTRAMP2TEMPSET_SIZE, "%d", reflowProfiles.profile3Temp[2]);
		txtRamp2TempSet.invalidate();
		Unicode::snprintf(txtRamp2TimeSetBuffer, TXTRAMP2TIMESET_SIZE, "%d", reflowProfiles.profile3Time[2]);
		txtRamp2TempSet.invalidate();
		// Reflow
		Unicode::snprintf(txtReflowTempSetBuffer, TXTREFLOWTEMPSET_SIZE, "%d", reflowProfiles.profile3Temp[3]);
		txtReflowTempSet.invalidate();
		Unicode::snprintf(txtReflowTimeSetBuffer, TXTREFLOWTIMESET_SIZE, "%d", reflowProfiles.profile3Time[3]);
		txtReflowTempSet.invalidate();
		// Cooling
		Unicode::snprintf(txtCoolingTempSetBuffer, TXTCOOLINGTEMPSET_SIZE, "%d", reflowProfiles.profile3Temp[4]);
		txtCoolingTempSet.invalidate();
		Unicode::snprintf(txtCoolingTimeSetBuffer, TXTCOOLINGTIMESET_SIZE, "%d", reflowProfiles.profile3Time[4]);
		txtCoolingTempSet.invalidate();
		break;
	case 4:
		// Ramp 1
		Unicode::snprintf(txtRamp1TempSetBuffer, TXTRAMP1TEMPSET_SIZE, "%d", reflowProfiles.profile4Temp[0]);
		txtRamp1TempSet.invalidate();
		Unicode::snprintf(txtRamp1TimeSetBuffer, TXTRAMP1TIMESET_SIZE, "%d", reflowProfiles.profile4Time[0]);
		txtRamp1TempSet.invalidate();
		// Soak
		Unicode::snprintf(txtSoakTempSetBuffer, TXTSOAKTEMPSET_SIZE, "%d", reflowProfiles.profile4Temp[1]);
		txtSoakTempSet.invalidate();
		Unicode::snprintf(txtSoakTimeSetBuffer, TXTSOAKTIMESET_SIZE, "%d", reflowProfiles.profile4Time[1]);
		txtSoakTempSet.invalidate();
		// Ramp 2
		Unicode::snprintf(txtRamp2TempSetBuffer, TXTRAMP2TEMPSET_SIZE, "%d", reflowProfiles.profile4Temp[2]);
		txtRamp2TempSet.invalidate();
		Unicode::snprintf(txtRamp2TimeSetBuffer, TXTRAMP2TIMESET_SIZE, "%d", reflowProfiles.profile4Time[2]);
		txtRamp2TempSet.invalidate();
		// Reflow
		Unicode::snprintf(txtReflowTempSetBuffer, TXTREFLOWTEMPSET_SIZE, "%d", reflowProfiles.profile4Temp[3]);
		txtReflowTempSet.invalidate();
		Unicode::snprintf(txtReflowTimeSetBuffer, TXTREFLOWTIMESET_SIZE, "%d", reflowProfiles.profile4Time[3]);
		txtReflowTempSet.invalidate();
		// Cooling
		Unicode::snprintf(txtCoolingTempSetBuffer, TXTCOOLINGTEMPSET_SIZE, "%d", reflowProfiles.profile4Temp[4]);
		txtCoolingTempSet.invalidate();
		Unicode::snprintf(txtCoolingTimeSetBuffer, TXTCOOLINGTIMESET_SIZE, "%d", reflowProfiles.profile4Time[4]);
		txtCoolingTempSet.invalidate();
		break;
	case 5:
		// Ramp 1
		Unicode::snprintf(txtRamp1TempSetBuffer, TXTRAMP1TEMPSET_SIZE, "%d", reflowProfiles.profile5Temp[0]);
		txtRamp1TempSet.invalidate();
		Unicode::snprintf(txtRamp1TimeSetBuffer, TXTRAMP1TIMESET_SIZE, "%d", reflowProfiles.profile5Time[0]);
		txtRamp1TempSet.invalidate();
		// Soak
		Unicode::snprintf(txtSoakTempSetBuffer, TXTSOAKTEMPSET_SIZE, "%d", reflowProfiles.profile5Temp[1]);
		txtSoakTempSet.invalidate();
		Unicode::snprintf(txtSoakTimeSetBuffer, TXTSOAKTIMESET_SIZE, "%d", reflowProfiles.profile5Time[1]);
		txtSoakTempSet.invalidate();
		// Ramp 2
		Unicode::snprintf(txtRamp2TempSetBuffer, TXTRAMP2TEMPSET_SIZE, "%d", reflowProfiles.profile5Temp[2]);
		txtRamp2TempSet.invalidate();
		Unicode::snprintf(txtRamp2TimeSetBuffer, TXTRAMP2TIMESET_SIZE, "%d", reflowProfiles.profile5Time[2]);
		txtRamp2TempSet.invalidate();
		// Reflow
		Unicode::snprintf(txtReflowTempSetBuffer, TXTREFLOWTEMPSET_SIZE, "%d", reflowProfiles.profile5Temp[3]);
		txtReflowTempSet.invalidate();
		Unicode::snprintf(txtReflowTimeSetBuffer, TXTREFLOWTIMESET_SIZE, "%d", reflowProfiles.profile5Time[3]);
		txtReflowTempSet.invalidate();
		// Cooling
		Unicode::snprintf(txtCoolingTempSetBuffer, TXTCOOLINGTEMPSET_SIZE, "%d", reflowProfiles.profile5Temp[4]);
		txtCoolingTempSet.invalidate();
		Unicode::snprintf(txtCoolingTimeSetBuffer, TXTCOOLINGTIMESET_SIZE, "%d", reflowProfiles.profile5Time[4]);
		txtCoolingTempSet.invalidate();
		break;
	default:
		break;
	}

    Home_ReflowViewBase::setupScreen();
}

void Home_ReflowView::tearDownScreen()
{
    Home_ReflowViewBase::tearDownScreen();
}


void Home_ReflowView::setTEMP(float temperatureProbe)
{
	// Show temperature on display
	Unicode::snprintfFloat(txtCurrentTempSetBuffer, TXTCURRENTTEMPSET_SIZE, "%.2f", float(temperatureProbe));
	txtCurrentTempSet.invalidate();
}

void Home_ReflowView::setTIME(int timeSeconds)
{
	// Show temperature on display
	Unicode::snprintf(txtCurrentTimeSetBuffer, TXTCURRENTTIMESET_SIZE, "%d", timeSeconds);
	txtCurrentTimeSet.invalidate();
}






