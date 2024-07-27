#ifndef SETUP_PIDVIEW_HPP
#define SETUP_PIDVIEW_HPP

#include <gui_generated/setup_pid_screen/Setup_PidViewBase.hpp>
#include <gui/setup_pid_screen/Setup_PidPresenter.hpp>

class Setup_PidView : public Setup_PidViewBase
{
public:
    Setup_PidView();
    virtual ~Setup_PidView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SETUP_PIDVIEW_HPP
