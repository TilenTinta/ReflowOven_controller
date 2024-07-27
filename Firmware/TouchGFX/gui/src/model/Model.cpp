#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "math.h"

#ifndef SIMULATOR
#endif

Model::Model() : modelListener(0), temperature(0)
{

}

void Model::tick()
{
	#ifndef SIMULATOR // block function in simulator mode

		temperature = ovenParameters.tempThermo; // convert temperature

	#endif

		modelListener -> setTEMP(temperature); // send data to listener
}
