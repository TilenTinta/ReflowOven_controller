#ifndef DRY_SETUPVIEW_HPP
#define DRY_SETUPVIEW_HPP

#include <gui_generated/dry_setup_screen/Dry_SetupViewBase.hpp>
#include <gui/dry_setup_screen/Dry_SetupPresenter.hpp>
#include "main.h"
#include "math.h"

class Dry_SetupView : public Dry_SetupViewBase
{
public:
    Dry_SetupView();
    virtual ~Dry_SetupView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    // Added functions
    virtual void TempUp();
	virtual void TempDn();
	virtual void TimeUp();
	virtual void TimeDn();
	virtual void SavePreset();

protected:
};

#endif // DRY_SETUPVIEW_HPP
