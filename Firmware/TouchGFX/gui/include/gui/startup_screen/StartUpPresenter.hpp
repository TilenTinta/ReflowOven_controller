#ifndef STARTUPPRESENTER_HPP
#define STARTUPPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class StartUpView;

class StartUpPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    StartUpPresenter(StartUpView& v);

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

    virtual ~StartUpPresenter() {}

private:
    StartUpPresenter();

    StartUpView& view;
};

#endif // STARTUPPRESENTER_HPP
