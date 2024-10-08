#ifndef REFLOW_SETUPVIEW_HPP
#define REFLOW_SETUPVIEW_HPP

#include <gui_generated/reflow_setup_screen/Reflow_SetupViewBase.hpp>
#include <gui/reflow_setup_screen/Reflow_SetupPresenter.hpp>

class Reflow_SetupView : public Reflow_SetupViewBase
{
public:
    Reflow_SetupView();
    virtual ~Reflow_SetupView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    // Added functions
    virtual void selectSoak();
    virtual void selectRamp2();
    virtual void selectReflow();
    virtual void selectCooling();
    virtual void selectRamp1();
    virtual void nextProfile();
    virtual void prevProfile();
    virtual void selectCurrProfile();
protected:
};

#endif // REFLOW_SETUPVIEW_HPP
