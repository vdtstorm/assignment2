//Vinson Thomas(vdt16)
//Made in similar format to given code
#include "Semi.h"

Semi::Semi() 
{
    myEngineSize = "unknown";
    setBrand("Custom");
    setModel("MAC");
}

Semi::Semi(string brand, string model, string fuelType, string engineSize) 
{
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineSize(engineSize);
}

Semi::~Semi() = default;

string Semi::getEngineSize() 
{
    return myEngineSize;
}

void Semi::setEngineSize(string engineSize) 
{
    myEngineSize = engineSize;

}

double Car::mileageEstimate(double time) 
{
    double mileage = 8 * time; // average mpg for semi's
  
    return mileage;
}

string Car::toString() 
{
    return "-> Semi\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
           getEngineSize();
}
