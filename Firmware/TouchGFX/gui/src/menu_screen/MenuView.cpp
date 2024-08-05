#include <gui/menu_screen/MenuView.hpp>

MenuView::MenuView()
{

}

void MenuView::setupScreen()
{
    MenuViewBase::setupScreen();
}

void MenuView::tearDownScreen()
{
    MenuViewBase::tearDownScreen();
}

// Go home on appropriate screen
void MenuView::BackToCurUse()
{
	if(ovenParameters.lastUsedMode == 0)
	{
		application().gotoHome_ReflowScreenNoTransition();
	}

	if(ovenParameters.lastUsedMode == 1)
	{
		application().gotoHome_DryScreenNoTransition();
	}
}
