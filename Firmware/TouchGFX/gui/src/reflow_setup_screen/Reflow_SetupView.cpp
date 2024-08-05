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

// select current profile and save what is used
void Reflow_SetupView::selectCurrProfile()
{
	ovenParameters.lastUsedMode = 0;
}
