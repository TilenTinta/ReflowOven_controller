#ifndef DRYSETUPVIEW_HPP
#define DRYSETUPVIEW_HPP

#include <gui_generated/drysetup_screen/DrySetupViewBase.hpp>
#include <gui/drysetup_screen/DrySetupPresenter.hpp>

class DrySetupView : public DrySetupViewBase
{
public:
    DrySetupView();
    virtual ~DrySetupView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DRYSETUPVIEW_HPP
