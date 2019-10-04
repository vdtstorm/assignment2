
//Vinson Thomas(vdt16)
// Made in similar format to files given by TA's
#include  "Jet.h"

Jet::Jet()
{
	numberOfEngines = 1;
	setBrand("Custom");
	setModel("Cessna");
}

Jet::Jet(string brand, string model, string fuelType, int engineNumber = 1)
{
	setBrand(brand);
    	setModel(model);
    	setFuelType(fuelType);
    	setEngineNumber(engineNumber);
}

Jet::~Jet() = default;

int Jet::getEngineNumber()
{
	return numberOfEngines;
}

void Jet::setEngineNumber(int engineNumber)
{
	numberOfEngines = engineNumber;
}


double Jet::mileageEstimate(double time) 
{
    	double mileage = 95 * time;
    	if (fuelType == "Rocket" && numberOfEngines > 2) 
	{
        	mileage += mileage * 5.05;
    	}
    	return mileage;
}

string Jet::toString() 
{
    	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
           	getEngineNumber();
}
