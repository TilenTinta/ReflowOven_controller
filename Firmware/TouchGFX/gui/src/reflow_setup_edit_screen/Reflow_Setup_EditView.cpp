#include <gui/reflow_setup_edit_screen/Reflow_Setup_EditView.hpp>

Reflow_Setup_EditView::Reflow_Setup_EditView()
{

}

void Reflow_Setup_EditView::setupScreen()
{
	switch(ovenParameters.profileNoSelected)
	{
	case 1:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile1Temp[ovenParameters.reflowSetupStep]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile1Temp[ovenParameters.reflowSetupStep];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile1Time[ovenParameters.reflowSetupStep]);
		txtTime.invalidate();
		time = reflowProfiles.profile1Time[ovenParameters.reflowSetupStep];
		break;

	case 2:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile2Temp[ovenParameters.reflowSetupStep]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile2Temp[ovenParameters.reflowSetupStep];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile2Time[ovenParameters.reflowSetupStep]);
		txtTime.invalidate();
		time = reflowProfiles.profile2Time[ovenParameters.reflowSetupStep];
		break;

	case 3:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile3Temp[ovenParameters.reflowSetupStep]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile3Temp[ovenParameters.reflowSetupStep];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile3Time[ovenParameters.reflowSetupStep]);
		txtTime.invalidate();
		time = reflowProfiles.profile3Time[ovenParameters.reflowSetupStep];
		break;

	case 4:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile4Temp[ovenParameters.reflowSetupStep]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile4Temp[ovenParameters.reflowSetupStep];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile4Time[ovenParameters.reflowSetupStep]);
		txtTime.invalidate();
		time = reflowProfiles.profile4Time[ovenParameters.reflowSetupStep];
		break;

	case 5:
		Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", reflowProfiles.profile5Temp[ovenParameters.reflowSetupStep]);
		txtTemp.invalidate();
		temp = reflowProfiles.profile5Temp[ovenParameters.reflowSetupStep];
		Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", reflowProfiles.profile5Time[ovenParameters.reflowSetupStep]);
		txtTime.invalidate();
		time = reflowProfiles.profile5Time[ovenParameters.reflowSetupStep];
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
	if (temp > 1) temp --;
	Unicode::snprintf(txtTempBuffer, TXTTEMP_SIZE, "%d", temp);
	txtTemp.invalidate();
}

// Increase time
void Reflow_Setup_EditView::timeUp()
{
	if (time < 65500) time ++;
	Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", time);
	txtTime.invalidate();
}

// Decrease time
void Reflow_Setup_EditView::timeDn()
{
	if (time > 1) time --;
	Unicode::snprintf(txtTimeBuffer, TXTTIME_SIZE, "%d", time);
	txtTime.invalidate();
}

// Save setted values
void Reflow_Setup_EditView::saveSetValue()
{
	switch(ovenParameters.profileNoSelected)
		{
		case 1:
			reflowProfiles.profile1Temp[ovenParameters.reflowSetupStep] = temp;
			reflowProfiles.profile1Time[ovenParameters.reflowSetupStep] = time;
			break;

		case 2:
			reflowProfiles.profile2Temp[ovenParameters.reflowSetupStep] = temp;
			reflowProfiles.profile2Time[ovenParameters.reflowSetupStep] = time;
			break;

		case 3:
			reflowProfiles.profile3Temp[ovenParameters.reflowSetupStep] = temp;
			reflowProfiles.profile3Time[ovenParameters.reflowSetupStep] = time;
			break;

		case 4:
			reflowProfiles.profile4Temp[ovenParameters.reflowSetupStep] = temp;
			reflowProfiles.profile4Time[ovenParameters.reflowSetupStep] = time;
			break;

		case 5:
			reflowProfiles.profile5Temp[ovenParameters.reflowSetupStep] = temp;
			reflowProfiles.profile5Time[ovenParameters.reflowSetupStep] = time;
			break;

		default:
			// Unavailable value
			break;
		}

	application().gotoReflow_SetupScreenNoTransition();
}
