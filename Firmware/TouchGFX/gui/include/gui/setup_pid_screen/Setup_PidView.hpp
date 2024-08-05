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

    // added functions
    virtual void PidToSettings_flag();
	virtual void PID_value_up();
	virtual void PID_value_dn();
	virtual void setPID_value();

protected:
	uint8_t pid_val_default = 0;
};

#endif // SETUP_PIDVIEW_HPP
