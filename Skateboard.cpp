//Vinson Thomas(vdt16)
// similar format to code given by TA's
#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model, string wood) 
{
    	setBrand(brand);
    	setModel(model);
	setBoardWood(wood);
    
}

Skateboard::~Skateboard() = default;

string Skateboard::getBoardWood()
{
	return typeOfWood;
}

void Skateboard::setBoardWood(string wood)
{
	typeOfWood = wood;
}

double Skateboard::mileageEstimate(double time) 
{
    	double mileage = .5 * time;
    	if(time > 25 && time < 250)
	{
		mileage += (.333*time);
	}
    	return mileage;
}


string Skateboard::toString() 
{
    
    	return "-> Skateboard\n" + Vehicle::toString() + "\n\tWood: " +
           getBoardWood();
}
