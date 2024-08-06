#ifndef SETTINGSVIEW_HPP
#define SETTINGSVIEW_HPP

#include <gui_generated/settings_screen/SettingsViewBase.hpp>
#include <gui/settings_screen/SettingsPresenter.hpp>
#include "main.h"

class SettingsView : public SettingsViewBase
{
public:
    SettingsView();
    virtual ~SettingsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    // added functions
    virtual void ProbesNoSelect();
	virtual void SSRNoSelect();
	virtual void CFSelect();
	virtual void outputAUX1();
	virtual void outputAUX2();
	virtual void SettingsToPid_P_flag();
	virtual void SettingsToPid_I_flag();
	virtual void SettingsToPid_D_flag();
	virtual void SaveSettings();

protected:
};

#endif // SETTINGSVIEW_HPP
