/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef WASHERWHEELITEMBASE_HPP
#define WASHERWHEELITEMBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>

class WasherWheelItemBase : public touchgfx::Container
{
public:
    WasherWheelItemBase();
    virtual ~WasherWheelItemBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image iconMode;

private:

};

#endif // WASHERWHEELITEMBASE_HPP