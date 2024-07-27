#ifndef HOME_REFLOWVIEW_HPP
#define HOME_REFLOWVIEW_HPP

#include <gui_generated/home_reflow_screen/Home_ReflowViewBase.hpp>
#include <gui/home_reflow_screen/Home_ReflowPresenter.hpp>
#include "main.h"

class Home_ReflowView : public Home_ReflowViewBase
{
public:
    Home_ReflowView();
    virtual ~Home_ReflowView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void setTEMP (float temperature); // virtual function - temperature

protected:
};

#endif // HOME_REFLOWVIEW_HPP
