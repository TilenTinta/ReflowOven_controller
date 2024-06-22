#ifndef HOMEREFLOWPRESENTER_HPP
#define HOMEREFLOWPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class HomeReflowView;

class HomeReflowPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    HomeReflowPresenter(HomeReflowView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~HomeReflowPresenter() {}

private:
    HomeReflowPresenter();

    HomeReflowView& view;
};

#endif // HOMEREFLOWPRESENTER_HPP
