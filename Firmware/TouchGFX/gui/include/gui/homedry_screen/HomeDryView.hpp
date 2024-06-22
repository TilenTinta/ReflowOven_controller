#ifndef HOMEDRYVIEW_HPP
#define HOMEDRYVIEW_HPP

#include <gui_generated/homedry_screen/HomeDryViewBase.hpp>
#include <gui/homedry_screen/HomeDryPresenter.hpp>

class HomeDryView : public HomeDryViewBase
{
public:
    HomeDryView();
    virtual ~HomeDryView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // HOMEDRYVIEW_HPP
