/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef REFLOW_SETUPVIEWBASE_HPP
#define REFLOW_SETUPVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/reflow_setup_screen/Reflow_SetupPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class Reflow_SetupViewBase : public touchgfx::View<Reflow_SetupPresenter>
{
public:
    Reflow_SetupViewBase();
    virtual ~Reflow_SetupViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void selectSoak()
    {
        // Override and implement this function in Reflow_Setup
    }
    virtual void selectRamp2()
    {
        // Override and implement this function in Reflow_Setup
    }
    virtual void selectReflow()
    {
        // Override and implement this function in Reflow_Setup
    }
    virtual void selectCooling()
    {
        // Override and implement this function in Reflow_Setup
    }
    virtual void nextProfile()
    {
        // Override and implement this function in Reflow_Setup
    }
    virtual void prevProfile()
    {
        // Override and implement this function in Reflow_Setup
    }
    virtual void selectRamp1()
    {
        // Override and implement this function in Reflow_Setup
    }
    virtual void selectCurrProfile()
    {
        // Override and implement this function in Reflow_Setup
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
    touchgfx::ButtonWithLabel btnSetRamp1;
    touchgfx::ButtonWithLabel btnSetSoak;
    touchgfx::ButtonWithLabel btnSetRamp2;
    touchgfx::ButtonWithLabel btnSetReflow;
    touchgfx::ButtonWithLabel btnSetCooling;
    touchgfx::Line line1;
    touchgfx::PainterRGB565 line1Painter;
    touchgfx::TextArea txt_1_1_1_1_1;
    touchgfx::TextArea txt_1_1_1_1_1_2;
    touchgfx::TextArea txt_1_1_1_1_1_2_1;
    touchgfx::TextArea txt_1_1_1_1_1_2_1_1;
    touchgfx::TextArea txt_1_1_1_1_1_1;
    touchgfx::ButtonWithIcon btnNext;
    touchgfx::ButtonWithIcon btnPrev;
    touchgfx::TextArea txt;
    touchgfx::TextAreaWithOneWildcard txtProfile;
    touchgfx::ButtonWithLabel btnBack;
    touchgfx::ButtonWithLabel btnSelect;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TXTPROFILE_SIZE = 4;
    touchgfx::Unicode::UnicodeChar txtProfileBuffer[TXTPROFILE_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 4800;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<Reflow_SetupViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // REFLOW_SETUPVIEWBASE_HPP