#ifndef REFLOW_SETUP_EDITVIEW_HPP
#define REFLOW_SETUP_EDITVIEW_HPP

#include <gui_generated/reflow_setup_edit_screen/Reflow_Setup_EditViewBase.hpp>
#include <gui/reflow_setup_edit_screen/Reflow_Setup_EditPresenter.hpp>

class Reflow_Setup_EditView : public Reflow_Setup_EditViewBase
{
public:
    Reflow_Setup_EditView();
    virtual ~Reflow_Setup_EditView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // REFLOW_SETUP_EDITVIEW_HPP
