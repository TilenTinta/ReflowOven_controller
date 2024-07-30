#include <gui/startup_screen/StartUpView.hpp>

StartUpView::StartUpView()
{

}

void StartUpView::setupScreen()
{
    StartUpViewBase::setupScreen();
}

void StartUpView::tearDownScreen()
{
    StartUpViewBase::tearDownScreen();
}

// Change screen from program
void StartUpView::setPAGE(int page)
{
	switch(page)
	{
	case 0:
		// DO NOTHING
		break;
	case 1:
		 application().gotoHome_ReflowScreenNoTransition();
		break;
	case 2:
		 application().gotoHome_DryScreenNoTransition();
		break;
	case 3:
		application().gotoErrorScreenNoTransition();
		break;
	default:
		break;
	}

}
