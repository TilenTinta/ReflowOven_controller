/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/dry_setup_screen/Dry_SetupViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Dry_SetupViewBase::Dry_SetupViewBase() :
    buttonCallback(this, &Dry_SetupViewBase::buttonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 320, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_RESIZED_IMAGE_320X480_ID));
    add(image1);

    line1_1.setPosition(20, 292, 288, 20);
    line1_1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    line1_1.setPainter(line1_1Painter);
    line1_1.setStart(5, 5);
    line1_1.setEnd(280, 5);
    line1_1.setLineWidth(4);
    line1_1.setLineEndingStyle(touchgfx::Line::SQUARE_CAP_ENDING);
    add(line1_1);

    textArea1_2_2.setPosition(25, 262, 81, 30);
    textArea1_2_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_2_2.setLinespacing(0);
    textArea1_2_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X45E));
    add(textArea1_2_2);

    line1.setPosition(16, 151, 288, 20);
    line1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    line1.setPainter(line1Painter);
    line1.setStart(5, 5);
    line1.setEnd(280, 5);
    line1.setLineWidth(4);
    line1.setLineEndingStyle(touchgfx::Line::SQUARE_CAP_ENDING);
    add(line1);

    textArea1_2_1.setPosition(21, 121, 170, 30);
    textArea1_2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_2_1.setLinespacing(0);
    textArea1_2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8J8S));
    add(textArea1_2_1);

    btnSet.setXY(194, 423);
    btnSet.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID));
    btnSet.setLabelText(touchgfx::TypedText(T___SINGLEUSE_L2J1));
    btnSet.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    btnSet.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnSet.setAction(buttonCallback);
    add(btnSet);

    btnTemp_UP.setXY(184, 169);
    btnTemp_UP.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_UP_50_50_000000_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_UP_50_50_FFFFFF_SVG_ID));
    btnTemp_UP.setIconXY(6, 6);
    btnTemp_UP.setAction(buttonCallback);
    add(btnTemp_UP);

    btnTemp_DN.setXY(251, 169);
    btnTemp_DN.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_DOWN_50_50_000000_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_DOWN_50_50_FFFFFF_SVG_ID));
    btnTemp_DN.setIconXY(6, 6);
    btnTemp_DN.setAction(buttonCallback);
    add(btnTemp_DN);

    txtDryTemp.setPosition(23, 175, 101, 44);
    txtDryTemp.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtDryTemp.setLinespacing(0);
    Unicode::snprintf(txtDryTempBuffer, TXTDRYTEMP_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtDryTemp.setWildcard(txtDryTempBuffer);
    txtDryTemp.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GGM4));
    add(txtDryTemp);

    btnTime_UP.setXY(184, 306);
    btnTime_UP.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_UP_50_50_000000_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_UP_50_50_FFFFFF_SVG_ID));
    btnTime_UP.setIconXY(6, 6);
    btnTime_UP.setAction(buttonCallback);
    add(btnTime_UP);

    btnTime_DN.setXY(251, 306);
    btnTime_DN.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_ICON_ROUNDED_TINY_FILL_ACTION_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_DOWN_50_50_000000_SVG_ID), touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_HARDWARE_KEYBOARD_ARROW_DOWN_50_50_FFFFFF_SVG_ID));
    btnTime_DN.setIconXY(6, 6);
    btnTime_DN.setAction(buttonCallback);
    add(btnTime_DN);

    txtDryTimeMin.setPosition(73, 312, 59, 45);
    txtDryTimeMin.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtDryTimeMin.setLinespacing(0);
    Unicode::snprintf(txtDryTimeMinBuffer, TXTDRYTIMEMIN_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtDryTimeMin.setWildcard(txtDryTimeMinBuffer);
    txtDryTimeMin.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GG4Z));
    add(txtDryTimeMin);

    btnBack.setXY(26, 423);
    btnBack.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID));
    btnBack.setLabelText(touchgfx::TypedText(T___SINGLEUSE_D3O5));
    btnBack.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    btnBack.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnBack.setAction(buttonCallback);
    add(btnBack);

    textArea1.setPosition(133, 327, 47, 30);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QXVA));
    add(textArea1);

    txtDryTimeH.setPosition(2, 312, 59, 45);
    txtDryTimeH.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtDryTimeH.setLinespacing(0);
    Unicode::snprintf(txtDryTimeHBuffer, TXTDRYTIMEH_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtDryTimeH.setWildcard(txtDryTimeHBuffer);
    txtDryTimeH.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3GL1));
    add(txtDryTimeH);

    textArea1_2.setPosition(64, 327, 23, 30);
    textArea1_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_2.setLinespacing(0);
    textArea1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8RKX));
    add(textArea1_2);

    textArea1_1.setXY(130, 189);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LMNM));
    add(textArea1_1);

    txt.setXY(40, 30);
    txt.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt.setLinespacing(0);
    txt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZOKV));
    add(txt);
}

Dry_SetupViewBase::~Dry_SetupViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Dry_SetupViewBase::setupScreen()
{

}

void Dry_SetupViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnBack)
    {
        //DrySetupToMenu
        //When btnBack clicked change screen to Menu
        //Go to Menu with no screen transition
        application().gotoMenuScreenNoTransition();
    }
    if (&src == &btnTemp_UP)
    {
        //TempUp
        //When btnTemp_UP clicked call virtual function
        //Call TempUp
        TempUp();
    }
    if (&src == &btnTemp_DN)
    {
        //TempDn
        //When btnTemp_DN clicked call virtual function
        //Call TempDn
        TempDn();
    }
    if (&src == &btnTime_UP)
    {
        //TimeUp
        //When btnTime_UP clicked call virtual function
        //Call TimeUp
        TimeUp();
    }
    if (&src == &btnTime_DN)
    {
        //TimeDn
        //When btnTime_DN clicked call virtual function
        //Call TimeDn
        TimeDn();
    }
    if (&src == &btnSet)
    {
        //SavePreset
        //When btnSet clicked call virtual function
        //Call SavePreset
        SavePreset();
        //SetDry
        //When btnSet clicked change screen to Home_Dry
        //Go to Home_Dry with no screen transition
        application().gotoHome_DryScreenNoTransition();
    }
}
