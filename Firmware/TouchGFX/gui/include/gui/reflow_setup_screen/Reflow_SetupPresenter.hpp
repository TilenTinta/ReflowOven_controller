#ifndef REFLOW_SETUPPRESENTER_HPP
#define REFLOW_SETUPPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Reflow_SetupView;

class Reflow_SetupPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Reflow_SetupPresenter(Reflow_SetupView& v);

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

    virtual ~Reflow_SetupPresenter() {}

private:
    Reflow_SetupPresenter();

    Reflow_SetupView& view;
};

#endif // REFLOW_SETUPPRESENTER_HPP
