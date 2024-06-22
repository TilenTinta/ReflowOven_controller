#ifndef REFLOWSETUPVIEW_HPP
#define REFLOWSETUPVIEW_HPP

#include <gui_generated/reflowsetup_screen/ReflowSetupViewBase.hpp>
#include <gui/reflowsetup_screen/ReflowSetupPresenter.hpp>

class ReflowSetupView : public ReflowSetupViewBase
{
public:
    ReflowSetupView();
    virtual ~ReflowSetupView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // REFLOWSETUPVIEW_HPP
