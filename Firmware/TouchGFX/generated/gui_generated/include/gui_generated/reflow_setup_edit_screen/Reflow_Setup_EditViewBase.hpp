/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef REFLOW_SETUP_EDITVIEWBASE_HPP
#define REFLOW_SETUP_EDITVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/reflow_setup_edit_screen/Reflow_Setup_EditPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class Reflow_Setup_EditViewBase : public touchgfx::View<Reflow_Setup_EditPresenter>
{
public:
    Reflow_Setup_EditViewBase();
    virtual ~Reflow_Setup_EditViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void saveSetValue()
    {
        // Override and implement this function in Reflow_Setup_Edit
    }
    virtual void tempUp()
    {
        // Override and implement this function in Reflow_Setup_Edit
    }
    virtual void tempDn()
    {
        // Override and implement this function in Reflow_Setup_Edit
    }
    virtual void timeUp()
    {
        // Override and implement this function in Reflow_Setup_Edit
    }
    virtual void timeDn()
    {
        // Override and implement this function in Reflow_Setup_Edit
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image image1;
    touchgfx::Line line1;
    touchgfx::PainterRGB565 line1Painter;
    touchgfx::Line line1_1;
    touchgfx::PainterRGB565 line1_1Painter;
    touchgfx::ButtonWithLabel btnSet;
    touchgfx::ButtonWithIcon btnTemp_UP;
    touchgfx::ButtonWithIcon btnTemp_DN;
    touchgfx::TextAreaWithOneWildcard txtTemp;
    touchgfx::ButtonWithIcon btnTime_UP;
    touchgfx::ButtonWithIcon btnTime_DN;
    touchgfx::TextAreaWithOneWildcard txtTime;
    touchgfx::ButtonWithLabel btnBack;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea textArea1_2;
    touchgfx::TextArea textArea1_2_1;
    touchgfx::TextArea textArea1_1;
    touchgfx::TextAreaWithOneWildcard txtScreenLabel;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TXTTEMP_SIZE = 4;
    touchgfx::Unicode::UnicodeChar txtTempBuffer[TXTTEMP_SIZE];
    static const uint16_t TXTTIME_SIZE = 4;
    touchgfx::Unicode::UnicodeChar txtTimeBuffer[TXTTIME_SIZE];
    static const uint16_t TXTSCREENLABEL_SIZE = 10;
    touchgfx::Unicode::UnicodeChar txtScreenLabelBuffer[TXTSCREENLABEL_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 4800;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Reflow_Setup_EditViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // REFLOW_SETUP_EDITVIEWBASE_HPP