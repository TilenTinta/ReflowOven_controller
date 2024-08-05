#ifndef HOME_DRYVIEW_HPP
#define HOME_DRYVIEW_HPP

#include <gui_generated/home_dry_screen/Home_DryViewBase.hpp>
#include <gui/home_dry_screen/Home_DryPresenter.hpp>
#include "main.h"
#include "math.h"

class Home_DryView : public Home_DryViewBase
{
public:
    Home_DryView();
    virtual ~Home_DryView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void StartDrying();
    virtual void StopDrying();

    virtual void setTEMP (float temperatureProbe); 	// virtual function - temperature
    virtual void setTIMELEFT (int time);			// virtual function - time left

protected:
};

#endif // HOME_DRYVIEW_HPP
