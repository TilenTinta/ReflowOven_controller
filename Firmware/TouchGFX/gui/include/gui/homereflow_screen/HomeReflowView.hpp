#ifndef HOMEREFLOWVIEW_HPP
#define HOMEREFLOWVIEW_HPP

#include <gui_generated/homereflow_screen/HomeReflowViewBase.hpp>
#include <gui/homereflow_screen/HomeReflowPresenter.hpp>

class HomeReflowView : public HomeReflowViewBase
{
public:
    HomeReflowView();
    virtual ~HomeReflowView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HOMEREFLOWVIEW_HPP
