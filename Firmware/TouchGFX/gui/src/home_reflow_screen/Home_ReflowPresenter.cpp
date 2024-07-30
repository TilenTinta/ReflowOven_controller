#include <gui/home_reflow_screen/Home_ReflowView.hpp>
#include <gui/home_reflow_screen/Home_ReflowPresenter.hpp>

Home_ReflowPresenter::Home_ReflowPresenter(Home_ReflowView& v)
    : view(v)
{

}

void Home_ReflowPresenter::activate()
{

}

void Home_ReflowPresenter::deactivate()
{

}

// Live update value - temperature
void Home_ReflowPresenter::setTEMP (float temperatureProbe)
{
	view.setTEMP(temperatureProbe);
}


// Live update value - time elapsed
void Home_ReflowPresenter::setTIME (int timeSeconds)
{
	view.setTIME(timeSeconds);
}
