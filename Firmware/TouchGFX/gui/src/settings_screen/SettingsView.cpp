#include <gui/settings_screen/SettingsView.hpp>

SettingsView::SettingsView()
{

}

void SettingsView::setupScreen()
{
	// set current used values - dual probes
	if (ovenParameters.dualProbes == 1)
	{
		toggleBtnProbes.forceState(1);
	}
	else
	{
		toggleBtnProbes.forceState(0);
	}

	toggleBtnProbes.invalidate();

	// set current used values - dual SSRs
	if (ovenParameters.dualSSRs == 1)
	{
		toggleBtnSSR.forceState(true);
	}
	else
	{
		toggleBtnSSR.forceState(false);
	}

	toggleBtnSSR.invalidate();

	// set current used values - units
	if (ovenParameters.units == 1)
	{
		toggleBtnCF.forceState(true);
	}
	else
	{
		toggleBtnCF.forceState(false);
	}

	toggleBtnCF.invalidate();

	// set current used values - AUX1
	if (ovenParameters.AUX1 == 1)
	{
		toggleBtnAUX1.forceState(true);
	}
	else
	{
		toggleBtnAUX1.forceState(false);
	}

	toggleBtnAUX1.invalidate();

	// set current used values - AUX2
	if (ovenParameters.AUX2 == 1)
	{
		toggleBtnAUX2.forceState(true);
	}
	else
	{
		toggleBtnAUX2.forceState(false);
	}

	toggleBtnAUX2.invalidate();

    SettingsViewBase::setupScreen();
}

void SettingsView::tearDownScreen()
{
    SettingsViewBase::tearDownScreen();
}

// Select the number of thermal probes used in oven
void SettingsView::ProbesNoSelect()
{
	if (toggleBtnProbes.getState() == 1)
	{
		ovenParameters.dualProbes = 1;
	}
	else
	{
		ovenParameters.dualProbes = 0;
	}
}

// Select the number of SSRs used in oven
void SettingsView::SSRNoSelect()
{
	if (toggleBtnSSR.getState() == 0)
	{
		ovenParameters.dualSSRs = 1;
	}
	else
	{
		ovenParameters.dualSSRs = 0;
	}
}

// selected units (C / F) TODO: not implemented yet
void SettingsView::CFSelect()
{
	if (toggleBtnCF.getState() == 0)
	{
		ovenParameters.units = 1;
	}
	else
	{
		ovenParameters.units = 0;
	}
}

// Enabling use of AUX1 output
void SettingsView::outputAUX1()
{
	if (toggleBtnAUX1.getState() == 0)
	{
		ovenParameters.AUX1 = 1;
	}
	else
	{
		ovenParameters.AUX1 = 0;
	}
}

// Enabling use of AUX1 output
void SettingsView::outputAUX2()
{
	if (toggleBtnAUX2.getState() == 0)
	{
		ovenParameters.AUX2 = 1;
	}
	else
	{
		ovenParameters.AUX2 = 0;
	}
}

// Set PID flag to 1 = P for menu
void SettingsView::SettingsToPid_P_flag()
{
	ovenParameters.pidSetupStep = 1;
}

// Set PID flag to 1 = I for menu
void SettingsView::SettingsToPid_I_flag()
{
	ovenParameters.pidSetupStep = 2;
}

// Set PID flag to 1 = D for menu
void SettingsView::SettingsToPid_D_flag()
{
	ovenParameters.pidSetupStep = 3;
}


