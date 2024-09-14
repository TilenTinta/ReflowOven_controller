#ifndef HOME_REFLOWVIEW_HPP
#define HOME_REFLOWVIEW_HPP

#include <gui_generated/home_reflow_screen/Home_ReflowViewBase.hpp>
#include <gui/home_reflow_screen/Home_ReflowPresenter.hpp>
#include "main.h"

class Home_ReflowView : public Home_ReflowViewBase
{
public:
    Home_ReflowView();
    virtual ~Home_ReflowView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void StartReflow();
	virtual void StopReflow();

	virtual void DrawPlot();

    virtual void setTEMP (float temperatureProbe); 	// virtual function - temperature
    virtual void setTIME (int timeSeconds); 		// virtual function - time
    virtual void setHIGHLIGHT (int boxNo); 			// virtual function - highlight
    virtual void setPLOTPOINT (int point); 			// virtual function - set plot point

protected:
    uint16_t* timePlotArr;
    uint16_t* tempPlotArr;
    uint8_t startStopOld = 0;
};

#endif // HOME_REFLOWVIEW_HPP
