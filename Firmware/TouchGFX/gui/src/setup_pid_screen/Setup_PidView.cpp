#include <gui/setup_pid_screen/Setup_PidView.hpp>

Setup_PidView::Setup_PidView()
{

}

void Setup_PidView::setupScreen()
{
	// Set screen according to button pressed
	switch(ovenParameters.pidSetupStep)
	{
	case 1:
		Unicode::snprintf(txtPID_lblBuffer, TXTPID_LBL_SIZE, "P");
		txtPID_lbl.invalidate();
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Kp);
		txtPID_val.invalidate();
		pid_val_default = ovenParameters.Kp; // save default value
		break;
	case 2:
		Unicode::snprintf(txtPID_lblBuffer, TXTPID_LBL_SIZE, "I");
		txtPID_lbl.invalidate();
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Ki);
		txtPID_val.invalidate();
		pid_val_default = ovenParameters.Ki; // save default value
		break;
	case 3:
		Unicode::snprintf(txtPID_lblBuffer, TXTPID_LBL_SIZE, "D");
		txtPID_lbl.invalidate();
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Kd);
		txtPID_val.invalidate();
		pid_val_default = ovenParameters.Kd; // save default value
		break;
	default:
		// Error
		break;
	}

    Setup_PidViewBase::setupScreen();
}

void Setup_PidView::tearDownScreen()
{
    Setup_PidViewBase::tearDownScreen();
}

// increase pid value
void Setup_PidView::PID_value_up()
{
	switch(ovenParameters.pidSetupStep)
	{
	case 0:
		// do nothing
		break;

	case 1:
		if (ovenParameters.Kp < 100) ovenParameters.Kp += 0.1f;
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Kp);
		txtPID_val.invalidate();
		break;

	case 2:
		if (ovenParameters.Ki < 100) ovenParameters.Ki += 0.1f;
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Ki);
		txtPID_val.invalidate();
		break;

	case 3:
		if (ovenParameters.Kd < 100) ovenParameters.Kd += 0.1f;
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Kd);
		txtPID_val.invalidate();
		break;

	default:
		break;
	}
}

// decrease pid value
void Setup_PidView::PID_value_dn()
{
	switch(ovenParameters.pidSetupStep)
	{
	case 0:
		// do nothing
		break;

	case 1:
		if (ovenParameters.Kp > 0.1f) ovenParameters.Kp -= 0.1f;
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Kp);
		txtPID_val.invalidate();
		break;

	case 2:
		if (ovenParameters.Ki > 0.1f) ovenParameters.Ki -= 0.1f;
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Ki);
		txtPID_val.invalidate();
		break;

	case 3:
		if (ovenParameters.Kd > 0.1f) ovenParameters.Kd -= 0.1f;
		Unicode::snprintfFloat(txtPID_valBuffer, TXTPID_VAL_SIZE, "%.2f", ovenParameters.Kd);
		txtPID_val.invalidate();
		break;

	default:
		break;
	}

}

// Revert pid setup value back to 0 (Back button), reverte changed pid value back to old one
void Setup_PidView::PidToSettings_flag()
{
	switch(ovenParameters.pidSetupStep)
	{
	case 0:
		// do nothing
		break;

	case 1:
		ovenParameters.Kp = pid_val_default;
		break;

	case 2:
		ovenParameters.Ki = pid_val_default;
		break;

	case 3:
		ovenParameters.Kd = pid_val_default;
		break;

	default:
		break;
	}

	ovenParameters.pidSetupStep = 0;
}


// Change screen and save value
void Setup_PidView::setPID_value()
{
	application().gotoSettingsScreenNoTransition();
	ovenParameters.pidSetupStep = 0;
	// Setted pid value is saved (not in flash)
}


