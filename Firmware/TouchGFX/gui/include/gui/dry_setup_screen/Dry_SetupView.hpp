#ifndef DRY_SETUPVIEW_HPP
#define DRY_SETUPVIEW_HPP

#include <gui_generated/dry_setup_screen/Dry_SetupViewBase.hpp>
#include <gui/dry_setup_screen/Dry_SetupPresenter.hpp>

class Dry_SetupView : public Dry_SetupViewBase
{
public:
    Dry_SetupView();
    virtual ~Dry_SetupView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DRY_SETUPVIEW_HPP
