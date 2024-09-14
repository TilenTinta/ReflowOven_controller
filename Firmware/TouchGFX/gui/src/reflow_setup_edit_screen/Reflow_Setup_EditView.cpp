#include <gui/reflow_setup_edit_screen/Reflow_Setup_EditView.hpp>

Reflow_Setup_EditView::Reflow_Setup_EditView()
{

}

void Reflow_Setup_EditView::setupScreen()
{
	switch(ovenParameters.profileNoEdit)
	{
	case 1:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile1Temp[ovenParameters.reflowSetupStep - 1]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile1Temp[ovenParameters.reflowSetupStep - 1];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile1Time[ovenParameters.reflowSetupStep - 1]);
		txtTime.invalidate();
		time = reflowProfiles.profile1Time[ovenParameters.reflowSetupStep - 1];

		timePrev = (ovenParameters.reflowSetupStep == 1) ? 0 : reflowProfiles.profile1Time[ovenParameters.reflowSetupStep - 2];
		timeNext = (ovenParameters.reflowSetupStep == 5) ? 600 : reflowProfiles.profile1Time[ovenParameters.reflowSetupStep];
		break;

	case 2:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile2Temp[ovenParameters.reflowSetupStep - 1]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile2Temp[ovenParameters.reflowSetupStep - 1];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile2Time[ovenParameters.reflowSetupStep - 1]);
		txtTime.invalidate();
		time = reflowProfiles.profile2Time[ovenParameters.reflowSetupStep - 1];

		timePrev = (ovenParameters.reflowSetupStep == 1) ? 0 : reflowProfiles.profile2Time[ovenParameters.reflowSetupStep - 2];
		timeNext = (ovenParameters.reflowSetupStep == 5) ? 600 : reflowProfiles.profile2Time[ovenParameters.reflowSetupStep];
		break;

	case 3:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile3Temp[ovenParameters.reflowSetupStep - 1]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile3Temp[ovenParameters.reflowSetupStep - 1];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile3Time[ovenParameters.reflowSetupStep - 1]);
		txtTime.invalidate();
		time = reflowProfiles.profile3Time[ovenParameters.reflowSetupStep - 1];

		timePrev = (ovenParameters.reflowSetupStep == 1) ? 0 : reflowProfiles.profile3Time[ovenParameters.reflowSetupStep - 2];
		timeNext = (ovenParameters.reflowSetupStep == 5) ? 600 : reflowProfiles.profile3Time[ovenParameters.reflowSetupStep];
		break;

	case 4:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile4Temp[ovenParameters.reflowSetupStep - 1]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile4Temp[ovenParameters.reflowSetupStep - 1];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile4Time[ovenParameters.reflowSetupStep - 1]);
		txtTime.invalidate();
		time = reflowProfiles.profile4Time[ovenParameters.reflowSetupStep - 1];

		timePrev = (ovenParameters.reflowSetupStep == 1) ? 0 : reflowProfiles.profile4Time[ovenParameters.reflowSetupStep - 2];
		timeNext = (ovenParameters.reflowSetupStep == 5) ? 600 : reflowProfiles.profile4Time[ovenParameters.reflowSetupStep];
		break;

	case 5:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile5Temp[ovenParameters.reflowSetupStep - 1]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile5Temp[ovenParameters.reflowSetupStep - 1];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile5Time[ovenParameters.reflowSetupStep - 1]);
		txtTime.invalidate();
		time = reflowProfiles.profile5Time[ovenParameters.reflowSetupStep - 1];

		timePrev = (ovenParameters.reflowSetupStep == 1) ? 0 : reflowProfiles.profile5Time[ovenParameters.reflowSetupStep - 2];
		timeNext = (ovenParameters.reflowSetupStep == 5) ? 600 : reflowProfiles.profile5Time[ovenParameters.reflowSetupStep];
		break;

	default:
		// Unavailable value
		break;
	}

	switch(ovenParameters.reflowSetupStep)
	{
	case 1:
		Unicode::snprintf(txtScreenLabelBuffer, TXTSCREENLABEL_SIZE, "Ramp 1");
		txtScreenLabel.invalidate();
		break;

	case 2:
		Unicode::snprintf(txtScreenLabelBuffer, TXTSCREENLABEL_SIZE, "Soak");
		txtScreenLabel.invalidate();
		break;

	case 3:
		Unicode::snprintf(txtScreenLabelBuffer, TXTSCREENLABEL_SIZE, "Ramp 2");
		txtScreenLabel.invalidate();
		break;

	case 4:
		Unicode::snprintf(txtScreenLabelBuffer, TXTSCREENLABEL_SIZE, "Reflow");
		txtScreenLabel.invalidate();
		break;

	case 5:
		Unicode::snprintf(txtScreenLabelBuffer, TXTSCREENLABEL_SIZE, "Cooling");
		txtScreenLabel.invalidate();
		break;

	default:
		// not an option
		break;
	}

    Reflow_Setup_EditViewBase::setupScreen();
}

void Reflow_Setup_EditView::tearDownScreen()
{
    Reflow_Setup_EditViewBase::tearDownScreen();
}

// Increase temperature
void Reflow_Setup_EditView::tempUp()
{
	if (temp < 300) temp ++;
	Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", temp);
	txtTemp.invalidate();
}

// Decrease temperature
void Reflow_Setup_EditView::tempDn()
{
	if (temp >= 1) temp --;
	Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", temp);
	txtTemp.invalidate();
}

// Increase time
void Reflow_Setup_EditView::timeUp()
{
	if (time < timeNext - 2) time ++;
	Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", time);
	txtTime.invalidate();
}

// Decrease time
void Reflow_Setup_EditView::timeDn()
{
	if (time > timePrev + 2) time --;
	Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", time);
	txtTime.invalidate();
}

// Save setted values
void Reflow_Setup_EditView::saveSetValue()
{
	switch(ovenParameters.profileNoEdit)
		{
		case 1:
			reflowProfiles.profile1Temp[ovenParameters.reflowSetupStep - 1] = temp;
			reflowProfiles.profile1Time[ovenParameters.reflowSetupStep - 1] = time;
			break;

		case 2:
			reflowProfiles.profile2Temp[ovenParameters.reflowSetupStep - 1] = temp;
			reflowProfiles.profile2Time[ovenParameters.reflowSetupStep - 1] = time;
			break;

		case 3:
			reflowProfiles.profile3Temp[ovenParameters.reflowSetupStep - 1] = temp;
			reflowProfiles.profile3Time[ovenParameters.reflowSetupStep - 1] = time;
			break;

		case 4:
			reflowProfiles.profile4Temp[ovenParameters.reflowSetupStep - 1] = temp;
			reflowProfiles.profile4Time[ovenParameters.reflowSetupStep - 1] = time;
			break;

		case 5:
			reflowProfiles.profile5Temp[ovenParameters.reflowSetupStep - 1] = temp;
			reflowProfiles.profile5Time[ovenParameters.reflowSetupStep - 1] = time;
			break;

		default:
			// Unavailable value
			break;
		}

	ovenParameters.saveFlash = 1;
	application().gotoReflow_SetupScreenNoTransition();
}
