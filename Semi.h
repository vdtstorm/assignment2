//Vinson Thomas(vdt16)
//Made in similar format to code given

#ifndef DRIVINGSIMULATOR_SEMI_H
#define DRIVINGSIMULATOR_SEMI_H

#include "PoweredVehicle.h"

class Semi : public PoweredVehicle
{
	private:
    	string myEngineSize;

	public:
    	Semi();

    	explicit Semi(string brand, string model, string fuelType,
                 string engineSize);

    	virtual ~Semi();
    	string getEngineSize();
    	void setEngineSize(string engineSize);
    	virtual double mileageEstimate(double time);
    	virtual string toString();
};

#endif
