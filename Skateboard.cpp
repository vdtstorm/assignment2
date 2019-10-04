#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model) 
{
    setBrand(brand);
    setModel(model);
    
}

Skateboard::~Skateboard() = default;



double Skateboard::mileageEstimate(double time) 
{
    	double mileage = .5 * time;
    	if(time > 25 && time < 250)
	{
		mileage += mileage +  (.333*time);
	}
    	return mileage;
}

string Skateboard::toString() 
{
    
    	return "-> Skateboard\n" + Vehicle::toString();
}
