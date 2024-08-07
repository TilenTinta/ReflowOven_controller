#ifndef HOME_REFLOWPRESENTER_HPP
#define HOME_REFLOWPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Home_ReflowView;

class Home_ReflowPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Home_ReflowPresenter(Home_ReflowView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~Home_ReflowPresenter() {}

    virtual void setTEMP (float temperatureProbe); 	// virtual function - temperature
    virtual void setTIME (int timeSeconds);		 	// virtual function - time
    virtual void setHIGHLIGHT (int boxNo); 			// virtual function - highlight
    virtual void setPLOTPOINT (int point); 			// virtual function - set plot point

private:
    Home_ReflowPresenter();

    Home_ReflowView& view;
};

#endif // HOME_REFLOWPRESENTER_HPP
