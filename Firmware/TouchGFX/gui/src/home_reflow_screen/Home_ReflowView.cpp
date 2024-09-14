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

		timePlotArr = &reflowProfiles.profile1Time[0];
		tempPlotArr = &reflowProfiles.profile1Temp[0];

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

		timePlotArr = &reflowProfiles.profile2Time[0];
		tempPlotArr = &reflowProfiles.profile2Temp[0];

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

		timePlotArr = &reflowProfiles.profile3Time[0];
		tempPlotArr = &reflowProfiles.profile3Temp[0];

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

		timePlotArr = &reflowProfiles.profile4Time[0];
		tempPlotArr = &reflowProfiles.profile4Temp[0];

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

		timePlotArr = &reflowProfiles.profile5Time[0];
		tempPlotArr = &reflowProfiles.profile5Temp[0];

		break;
	default:
		break;
	}

	/*
	// remove all highlight boxes
	highlight1.setVisible(false);
	highlight1.invalidate();
	highlight2.setVisible(false);
	highlight2.invalidate();
	highlight3.setVisible(false);
	highlight3.invalidate();
	highlight4.setVisible(false);
	highlight4.invalidate();
	highlight5.setVisible(false);
	highlight5.invalidate()
	 */

	Unicode::snprintf(txtRamp1Buffer, TXTRAMP1_SIZE, " ");
	txtRamp1.invalidate();
	Unicode::snprintf(txtSoakBuffer, TXTSOAK_SIZE, " ");
	txtSoak.invalidate();
	Unicode::snprintf(txtRamp2Buffer, TXTRAMP2_SIZE, " ");
	txtRamp2.invalidate();
	Unicode::snprintf(txtReflowBuffer, TXTREFLOW_SIZE, " ");
	txtReflow.invalidate();
	Unicode::snprintf(txtCoolingBuffer, TXTCOOLING_SIZE, " ");
	txtCooling.invalidate();

	// Draw all the points of selected profile
	DrawPlot();

	// Button START / STOP
	btnReflowStart.setVisible(!ovenParameters.startStop);
	btnReflowStart.invalidate();
	btnReflowStop.setVisible(ovenParameters.startStop);
	btnReflowStop.invalidate();

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

void Home_ReflowView::setHIGHLIGHT(int boxNo)
{
	switch(boxNo)
	{
	case 0:
		Unicode::snprintf(txtRamp1Buffer, TXTRAMP1_SIZE, "*");
		txtRamp1.invalidate();
		Unicode::snprintf(txtSoakBuffer, TXTSOAK_SIZE, " ");
		txtSoak.invalidate();
		Unicode::snprintf(txtRamp2Buffer, TXTRAMP2_SIZE, " ");
		txtRamp2.invalidate();
		Unicode::snprintf(txtReflowBuffer, TXTREFLOW_SIZE, " ");
		txtReflow.invalidate();
		Unicode::snprintf(txtCoolingBuffer, TXTCOOLING_SIZE, " ");
		txtCooling.invalidate();
		break;

	case 1:
		Unicode::snprintf(txtRamp1Buffer, TXTRAMP1_SIZE, " ");
		txtRamp1.invalidate();
		Unicode::snprintf(txtSoakBuffer, TXTSOAK_SIZE, "*");
		txtSoak.invalidate();
		Unicode::snprintf(txtRamp2Buffer, TXTRAMP2_SIZE, " ");
		txtRamp2.invalidate();
		Unicode::snprintf(txtReflowBuffer, TXTREFLOW_SIZE, " ");
		txtReflow.invalidate();
		Unicode::snprintf(txtCoolingBuffer, TXTCOOLING_SIZE, " ");
		txtCooling.invalidate();
		break;

	case 2:
		Unicode::snprintf(txtRamp1Buffer, TXTRAMP1_SIZE, " ");
		txtRamp1.invalidate();
		Unicode::snprintf(txtSoakBuffer, TXTSOAK_SIZE, " ");
		txtSoak.invalidate();
		Unicode::snprintf(txtRamp2Buffer, TXTRAMP2_SIZE, "*");
		txtRamp2.invalidate();
		Unicode::snprintf(txtReflowBuffer, TXTREFLOW_SIZE, " ");
		txtReflow.invalidate();
		Unicode::snprintf(txtCoolingBuffer, TXTCOOLING_SIZE, " ");
		txtCooling.invalidate();
		break;

	case 3:
		Unicode::snprintf(txtRamp1Buffer, TXTRAMP1_SIZE, " ");
		txtRamp1.invalidate();
		Unicode::snprintf(txtSoakBuffer, TXTSOAK_SIZE, " ");
		txtSoak.invalidate();
		Unicode::snprintf(txtRamp2Buffer, TXTRAMP2_SIZE, " ");
		txtRamp2.invalidate();
		Unicode::snprintf(txtReflowBuffer, TXTREFLOW_SIZE, "*");
		txtReflow.invalidate();
		Unicode::snprintf(txtCoolingBuffer, TXTCOOLING_SIZE, " ");
		txtCooling.invalidate();
		break;

	case 4:
		Unicode::snprintf(txtRamp1Buffer, TXTRAMP1_SIZE, " ");
		txtRamp1.invalidate();
		Unicode::snprintf(txtSoakBuffer, TXTSOAK_SIZE, " ");
		txtSoak.invalidate();
		Unicode::snprintf(txtRamp2Buffer, TXTRAMP2_SIZE, " ");
		txtRamp2.invalidate();
		Unicode::snprintf(txtReflowBuffer, TXTREFLOW_SIZE, " ");
		txtReflow.invalidate();
		Unicode::snprintf(txtCoolingBuffer, TXTCOOLING_SIZE, "*");
		txtCooling.invalidate();
		break;

	case 5:
		Unicode::snprintf(txtRamp1Buffer, TXTRAMP1_SIZE, " ");
		txtRamp1.invalidate();
		Unicode::snprintf(txtSoakBuffer, TXTSOAK_SIZE, " ");
		txtSoak.invalidate();
		Unicode::snprintf(txtRamp2Buffer, TXTRAMP2_SIZE, " ");
		txtRamp2.invalidate();
		Unicode::snprintf(txtReflowBuffer, TXTREFLOW_SIZE, " ");
		txtReflow.invalidate();
		Unicode::snprintf(txtCoolingBuffer, TXTCOOLING_SIZE, " ");
		txtCooling.invalidate();
		break;

	default:
		Unicode::snprintf(txtRamp1Buffer, TXTRAMP1_SIZE, " ");
		txtRamp1.invalidate();
		Unicode::snprintf(txtSoakBuffer, TXTSOAK_SIZE, " ");
		txtSoak.invalidate();
		Unicode::snprintf(txtRamp2Buffer, TXTRAMP2_SIZE, " ");
		txtRamp2.invalidate();
		Unicode::snprintf(txtReflowBuffer, TXTREFLOW_SIZE, " ");
		txtReflow.invalidate();
		Unicode::snprintf(txtCoolingBuffer, TXTCOOLING_SIZE, " ");
		txtCooling.invalidate();
		break;
	}
}

void Home_ReflowView::StartReflow()
{
	ovenParameters.startStop = 1;
	btnReflowStart.setVisible(0);
	btnReflowStart.invalidate();
	btnReflowStop.setVisible(1);
	btnReflowStop.invalidate();
}

void Home_ReflowView::StopReflow()
{
	ovenParameters.startStop = 0;
	ovenParameters.reflowStage = 0;
	GraphReflow2.clear();
	GraphReflow2.invalidate();
	btnReflowStart.setVisible(1);
	btnReflowStart.invalidate();
	btnReflowStop.setVisible(0);
	btnReflowStop.invalidate();
}

void Home_ReflowView::DrawPlot()
{
	// Target graph is a bit shifted if the profile is less than 450 sec
	GraphReflow1.addDataPoint(0, 20);
	GraphReflow1.addDataPoint(*timePlotArr, *tempPlotArr);
	GraphReflow1.addDataPoint(*(timePlotArr + 1), *(tempPlotArr + 1));
	GraphReflow1.addDataPoint(*(timePlotArr + 2), *(tempPlotArr + 2));
	GraphReflow1.addDataPoint(*(timePlotArr + 3), *(tempPlotArr + 3));
	GraphReflow1.addDataPoint(*(timePlotArr + 4), *(tempPlotArr + 4));
	GraphReflow1.addDataPoint(450, 20);
}

void Home_ReflowView::setPLOTPOINT(int point)
{
	if (ovenParameters.startStop == 1 && ovenParameters.addPoint == 1)
	{
		GraphReflow2.addDataPoint(point);
		ovenParameters.addPoint = 0;
	}
}




