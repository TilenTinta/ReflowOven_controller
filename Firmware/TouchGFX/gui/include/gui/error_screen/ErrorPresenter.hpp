#ifndef ERRORPRESENTER_HPP
#define ERRORPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ErrorView;

class ErrorPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    ErrorPresenter(ErrorView& v);

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

    virtual ~ErrorPresenter() {}

private:
    ErrorPresenter();

    ErrorView& view;
};

#endif // ERRORPRESENTER_HPP
