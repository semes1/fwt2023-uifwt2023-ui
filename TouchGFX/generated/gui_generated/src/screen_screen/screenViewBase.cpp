/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

screenViewBase::screenViewBase() :
    interaction1Counter(0)
{
    __background.setPosition(0, 0, 1024, 600);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 1024, 600);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(box1);

    scalableImage1.setBitmap(touchgfx::Bitmap(BITMAP_FWTFLAG_ID));
    scalableImage1.setPosition(306, 45, 412, 217);
    scalableImage1.setScalingAlgorithm(touchgfx::ScalableImage::BILINEAR_INTERPOLATION);
    add(scalableImage1);

    textArea1.setPosition(418, 273, 165, 97);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(235, 7, 7));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LG40));
    add(textArea1);

    textureMapper1.setXY(424, 386);
    textureMapper1.setBitmap(touchgfx::Bitmap(BITMAP_LIANJIE_ID));
    textureMapper1.setWidth(152);
    textureMapper1.setHeight(152);
    textureMapper1.setBitmapPosition(44.0f, 44.0f);
    textureMapper1.setScale(1.0f);
    textureMapper1.setCameraDistance(1000.0f);
    textureMapper1.setOrigo(76.0f, 76.0f, 1000.0f);
    textureMapper1.setCamera(76.0f, 76.0f);
    textureMapper1.setAngles(0.0f, 0.0f, 0.0f);
    textureMapper1.setRenderingAlgorithm(touchgfx::TextureMapper::NEAREST_NEIGHBOR);
    add(textureMapper1);
}

screenViewBase::~screenViewBase()
{

}

void screenViewBase::setupScreen()
{

}

void screenViewBase::afterTransition()
{
    //Interaction1
    //When screen transition ends delay
    //Delay for 1000 ms (60 Ticks)
    interaction1Counter = INTERACTION1_DURATION;
}

void screenViewBase::handleTickEvent()
{
    if (interaction1Counter > 0)
    {
        interaction1Counter--;
        if (interaction1Counter == 0)
        {
                //Interaction2
                //When Interaction1 completed change screen to Screen1
                //Go to Screen1 with screen transition towards South
                application().gotoScreen1ScreenSlideTransitionSouth();
        }
    }
}
