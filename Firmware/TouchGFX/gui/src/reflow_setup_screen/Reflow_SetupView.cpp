#include <gui/reflow_setup_screen/Reflow_SetupView.hpp>

Reflow_SetupView::Reflow_SetupView()
{

}

void Reflow_SetupView::setupScreen()
{
    Reflow_SetupViewBase::setupScreen();
}

void Reflow_SetupView::tearDownScreen()
{
    Reflow_SetupViewBase::tearDownScreen();
}

// Next profile
void Reflow_SetupView::nextProfile()
{
	if (profileNo < 5)
	{
		profileNo ++;
	}
	else
	{
		profileNo = 1;
	}

	 Unicode::snprintf(txtProfileBuffer, TXTPROFILE_SIZE, "%d", profileNo);
	 txtProfile.invalidate();
}

// Previous profile
void Reflow_SetupView::prevProfile()
{
	if (profileNo > 1)
	{
		profileNo --;
	}
	else
	{
		profileNo = 5;
	}

	Unicode::snprintf(txtProfileBuffer, TXTPROFILE_SIZE, "%d", profileNo);
	txtProfile.invalidate();
}

// Edit ramp1
void Reflow_SetupView::selectRamp1()
{
	ovenParameters.reflowSetupStep = 1;
	application().gotoReflow_Setup_EditScreenNoTransition();
}

// Edit soak
void Reflow_SetupView::selectSoak()
{
	ovenParameters.reflowSetupStep = 2;
	application().gotoReflow_Setup_EditScreenNoTransition();
}

// Edit ramp2
void Reflow_SetupView::selectRamp2()
{
	ovenParameters.reflowSetupStep = 3;
	application().gotoReflow_Setup_EditScreenNoTransition();
}

// Edit reflow
void Reflow_SetupView::selectReflow()
{
	ovenParameters.reflowSetupStep = 4;
	application().gotoReflow_Setup_EditScreenNoTransition();
}

// Edit cooling
void Reflow_SetupView::selectCooling()
{
	ovenParameters.reflowSetupStep = 5;
	application().gotoReflow_Setup_EditScreenNoTransition();
}

// select current profile and save what is used
void Reflow_SetupView::selectCurrProfile()
{
	ovenParameters.lastUsedMode = 0;
	ovenParameters.profileNoSelected = profileNo;
}
