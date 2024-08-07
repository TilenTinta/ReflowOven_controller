#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "math.h"

#ifndef SIMULATOR
#endif

Model::Model() : modelListener(0)//, temperatureProbe(0)
{

}

void Model::tick()
{
	#ifndef SIMULATOR // block function in simulator mode

	temperatureProbe = ovenParameters.tempThermo; // convert temperature

	timeSecReflow = ovenParameters.cntMinute * 60 + ovenParameters.cntSecond; // get time in seconds to display on screen - reflow

	timeMinDry = dryPreset.dryTime - (ovenParameters.cntHour * 60 + ovenParameters.cntMinute); // get the time till the end of drying (oven timer)

	page = ovenParameters.pageChageNo; // number of next page

	if(boxNo != ovenParameters.reflowStage && ovenParameters.startStop == 1) boxNo = ovenParameters.reflowStage; // change the highlited temp and time on reflow home screen
	if (ovenParameters.startStop == 0) boxNo = 5;

	point = ovenParameters.tempThermoAvg;

	#endif

		modelListener -> setTEMP(temperatureProbe); 	// send data to listener
		modelListener -> setTIME(timeSecReflow); 		// send data to listener
		modelListener -> setPAGE(page);					// send data to listener
		modelListener -> setTIMELEFT(timeMinDry);		// send data to listener
		modelListener -> setHIGHLIGHT(boxNo);			// send data to listener
		modelListener -> setPLOTPOINT(point);			// send data to listener
}
