#ifndef MODELLISTENER_HPP
#define MODELLISTENER_HPP

#include <gui/model/Model.hpp>
#include "main.h"

class ModelListener
{
public:
    ModelListener() : model(0) {}
    
    virtual ~ModelListener() {}

    void bind(Model* m)
    {
        model = m;
    }

    virtual void setTEMP (float temperatureProbe) {}; 	// virtual function - temperature
    virtual void setTIME (int timeSeconds) {};		 	// virtual function - time
    virtual void setPAGE (int page) {};		 			// virtual function - time
    virtual void setTIMELEFT (int time) {};		 		// virtual function - time


protected:
    Model* model;
};

#endif // MODELLISTENER_HPP
