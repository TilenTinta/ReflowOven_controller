#ifndef HOME_DRYVIEW_HPP
#define HOME_DRYVIEW_HPP

#include <gui_generated/home_dry_screen/Home_DryViewBase.hpp>
#include <gui/home_dry_screen/Home_DryPresenter.hpp>
#include "main.h"

class Home_DryView : public Home_DryViewBase
{
public:
    Home_DryView();
    virtual ~Home_DryView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HOME_DRYVIEW_HPP
