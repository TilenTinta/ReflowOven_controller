#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();
protected:
    ModelListener* modelListener;

    float temperatureProbe; 	// temperature data
    int timeSecReflow; 			// time in seconds for reflow page
    int timeMinDry; 			// time in minutes for dry page
    int page;					// value of page
};

#endif // MODEL_HPP
