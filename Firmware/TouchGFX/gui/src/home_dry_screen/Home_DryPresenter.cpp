#include <gui/home_dry_screen/Home_DryView.hpp>
#include <gui/home_dry_screen/Home_DryPresenter.hpp>

Home_DryPresenter::Home_DryPresenter(Home_DryView& v) : view(v)
{

}

void Home_DryPresenter::activate()
{

}

void Home_DryPresenter::deactivate()
{

}

// Display temperature
void Home_DryPresenter::setTEMP(float temperatureProbe)
{
	view.setTEMP(temperatureProbe);
}

// Display time left
void Home_DryPresenter::setTIMELEFT (int time)
{
	view.setTIMELEFT(time);
}
