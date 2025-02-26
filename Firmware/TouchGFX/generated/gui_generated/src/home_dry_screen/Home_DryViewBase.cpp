/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/home_dry_screen/Home_DryViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Home_DryViewBase::Home_DryViewBase() :
    buttonCallback(this, &Home_DryViewBase::buttonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 320, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_RESIZED_IMAGE_320X480_ID));
    add(image1);

    txtTimeMinLeft.setPosition(203, 175, 52, 45);
    txtTimeMinLeft.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtTimeMinLeft.setLinespacing(0);
    Unicode::snprintf(txtTimeMinLeftBuffer, TXTTIMEMINLEFT_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtTimeMinLeft.setWildcard(txtTimeMinLeftBuffer);
    txtTimeMinLeft.setTypedText(touchgfx::TypedText(T___SINGLEUSE_21EX));
    add(txtTimeMinLeft);

    textMin.setPosition(258, 190, 47, 30);
    textMin.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textMin.setLinespacing(0);
    textMin.setTypedText(touchgfx::TypedText(T___SINGLEUSE_WLV9));
    add(textMin);

    txtTimeHLeft.setPosition(117, 175, 59, 45);
    txtTimeHLeft.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtTimeHLeft.setLinespacing(0);
    Unicode::snprintf(txtTimeHLeftBuffer, TXTTIMEHLEFT_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtTimeHLeft.setWildcard(txtTimeHLeftBuffer);
    txtTimeHLeft.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FZGI));
    add(txtTimeHLeft);

    textH.setPosition(182, 352, 23, 30);
    textH.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textH.setLinespacing(0);
    textH.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0T7G));
    add(textH);

    textH_1.setPosition(180, 190, 23, 30);
    textH_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textH_1.setLinespacing(0);
    textH_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_T7SN));
    add(textH_1);

    txt_1.setXY(13, 296);
    txt_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_1.setLinespacing(0);
    txt_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_EGXO));
    add(txt_1);

    txt_1_2.setXY(31, 121);
    txt_1_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_1_2.setLinespacing(0);
    txt_1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_7B6F));
    add(txt_1_2);

    txt_1_2_2.setXY(98, 23);
    txt_1_2_2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_1_2_2.setLinespacing(0);
    txt_1_2_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_79XX));
    add(txt_1_2_2);

    txt_1_2_1.setXY(17, 196);
    txt_1_2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_1_2_1.setLinespacing(0);
    txt_1_2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P6QV));
    add(txt_1_2_1);

    txt_1_1.setXY(17, 358);
    txt_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txt_1_1.setLinespacing(0);
    txt_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_2C47));
    add(txt_1_1);

    line1.setPosition(17, 254, 288, 20);
    line1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    line1.setPainter(line1Painter);
    line1.setStart(5, 5);
    line1.setEnd(280, 5);
    line1.setLineWidth(4);
    line1.setLineEndingStyle(touchgfx::Line::SQUARE_CAP_ENDING);
    add(line1);

    line1_1.setPosition(17, 68, 288, 20);
    line1_1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    line1_1.setPainter(line1_1Painter);
    line1_1.setStart(5, 5);
    line1_1.setEnd(280, 5);
    line1_1.setLineWidth(4);
    line1_1.setLineEndingStyle(touchgfx::Line::SQUARE_CAP_ENDING);
    add(line1_1);

    txtDryTempSet.setPosition(123, 276, 126, 44);
    txtDryTempSet.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtDryTempSet.setLinespacing(0);
    Unicode::snprintf(txtDryTempSetBuffer, TXTDRYTEMPSET_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtDryTempSet.setWildcard(txtDryTempSetBuffer);
    txtDryTempSet.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6ZGJ));
    add(txtDryTempSet);

    txtDryTimeMinSet.setPosition(200, 337, 59, 45);
    txtDryTimeMinSet.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtDryTimeMinSet.setLinespacing(0);
    Unicode::snprintf(txtDryTimeMinSetBuffer, TXTDRYTIMEMINSET_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtDryTimeMinSet.setWildcard(txtDryTimeMinSetBuffer);
    txtDryTimeMinSet.setTypedText(touchgfx::TypedText(T___SINGLEUSE_JK8W));
    add(txtDryTimeMinSet);

    txtDryTimeHSet.setPosition(123, 337, 59, 45);
    txtDryTimeHSet.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtDryTimeHSet.setLinespacing(0);
    Unicode::snprintf(txtDryTimeHSetBuffer, TXTDRYTIMEHSET_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtDryTimeHSet.setWildcard(txtDryTimeHSetBuffer);
    txtDryTimeHSet.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GGH7));
    add(txtDryTimeHSet);

    textArea1.setPosition(258, 352, 47, 30);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_7W37));
    add(textArea1);

    textArea1_1.setXY(255, 290);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_05N8));
    add(textArea1_1);

    txtCurTemp.setPosition(117, 101, 149, 44);
    txtCurTemp.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    txtCurTemp.setLinespacing(0);
    Unicode::snprintf(txtCurTempBuffer, TXTCURTEMP_SIZE, "%s", touchgfx::TypedText(T_0).getText());
    txtCurTemp.setWildcard(txtCurTempBuffer);
    txtCurTemp.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9KHO));
    add(txtCurTemp);

    textArea1_1_1.setXY(266, 115);
    textArea1_1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1_1_1.setLinespacing(0);
    textArea1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XLJP));
    add(textArea1_1_1);

    btnDryMenu.setXY(186, 423);
    btnDryMenu.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID));
    btnDryMenu.setLabelText(touchgfx::TypedText(T___SINGLEUSE_FZEQ));
    btnDryMenu.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    btnDryMenu.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnDryMenu.setAction(buttonCallback);
    add(btnDryMenu);

    btnDryStop.setXY(38, 423);
    btnDryStop.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID));
    btnDryStop.setLabelText(touchgfx::TypedText(T___SINGLEUSE_OR7I));
    btnDryStop.setLabelColor(touchgfx::Color::getColorFromRGB(255, 0, 0));
    btnDryStop.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnDryStop.setAction(buttonCallback);
    add(btnDryStop);

    btnDryStart.setXY(38, 423);
    btnDryStart.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_ACTION_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_36_TINY_ROUND_PRESSED_ID));
    btnDryStart.setLabelText(touchgfx::TypedText(T___SINGLEUSE_23R0));
    btnDryStart.setLabelColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    btnDryStart.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    btnDryStart.setAction(buttonCallback);
    add(btnDryStart);
}

Home_DryViewBase::~Home_DryViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Home_DryViewBase::setupScreen()
{

}

void Home_DryViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &btnDryMenu)
    {
        //DryToMenu
        //When btnDryMenu clicked change screen to Menu
        //Go to Menu with no screen transition
        application().gotoMenuScreenNoTransition();
    }
    if (&src == &btnDryStart)
    {
        //StartDrying
        //When btnDryStart clicked call virtual function
        //Call StartDrying
        StartDrying();
    }
    if (&src == &btnDryStop)
    {
        //StopDrying
        //When btnDryStop clicked call virtual function
        //Call StopDrying
        StopDrying();
    }
}
