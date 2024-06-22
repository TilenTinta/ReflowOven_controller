#ifndef ERRORVIEW_HPP
#define ERRORVIEW_HPP

#include <gui_generated/error_screen/ErrorViewBase.hpp>
#include <gui/error_screen/ErrorPresenter.hpp>

class ErrorView : public ErrorViewBase
{
public:
    ErrorView();
    virtual ~ErrorView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ERRORVIEW_HPP
