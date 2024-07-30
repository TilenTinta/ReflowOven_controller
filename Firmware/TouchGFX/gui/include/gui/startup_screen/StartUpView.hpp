#ifndef STARTUPVIEW_HPP
#define STARTUPVIEW_HPP

#include <gui_generated/startup_screen/StartUpViewBase.hpp>
#include <gui/startup_screen/StartUpPresenter.hpp>
#include "main.h"

class StartUpView : public StartUpViewBase
{
public:
    StartUpView();
    virtual ~StartUpView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void setPAGE(int page);

protected:
};

#endif // STARTUPVIEW_HPP
