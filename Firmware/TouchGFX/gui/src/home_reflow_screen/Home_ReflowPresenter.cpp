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

// Live update value - highlighted box
void Home_ReflowPresenter::setHIGHLIGHT (int boxNo)
{
	view.setHIGHLIGHT(boxNo);
}

// Live update value - temperature plot point
void Home_ReflowPresenter::setPLOTPOINT (int point)
{
	view.setPLOTPOINT(point);
}
