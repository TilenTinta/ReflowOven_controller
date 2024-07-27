#ifndef DRY_SETUPPRESENTER_HPP
#define DRY_SETUPPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class Dry_SetupView;

class Dry_SetupPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    Dry_SetupPresenter(Dry_SetupView& v);

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

    virtual ~Dry_SetupPresenter() {}

private:
    Dry_SetupPresenter();

    Dry_SetupView& view;
};

#endif // DRY_SETUPPRESENTER_HPP
