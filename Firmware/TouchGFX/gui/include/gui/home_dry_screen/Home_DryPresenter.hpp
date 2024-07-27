#ifndef HOME_DRYPRESENTER_HPP
#define HOME_DRYPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Home_DryView;

class Home_DryPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Home_DryPresenter(Home_DryView& v);

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

    virtual ~Home_DryPresenter() {}

private:
    Home_DryPresenter();

    Home_DryView& view;
};

#endif // HOME_DRYPRESENTER_HPP
