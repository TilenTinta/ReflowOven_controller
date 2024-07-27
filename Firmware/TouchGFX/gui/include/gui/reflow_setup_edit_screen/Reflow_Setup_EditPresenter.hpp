#ifndef REFLOW_SETUP_EDITPRESENTER_HPP
#define REFLOW_SETUP_EDITPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Reflow_Setup_EditView;

class Reflow_Setup_EditPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Reflow_Setup_EditPresenter(Reflow_Setup_EditView& v);

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

    virtual ~Reflow_Setup_EditPresenter() {}

private:
    Reflow_Setup_EditPresenter();

    Reflow_Setup_EditView& view;
};

#endif // REFLOW_SETUP_EDITPRESENTER_HPP
