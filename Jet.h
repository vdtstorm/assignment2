// vinson Thomas(vdt16)
// 9/30/19
// Made in similar format to files added by TA's
#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include  "PoweredVehicle.h"


class Jet : public PoweredVehicle
{
	private:
		int numberOfEngines;

	public:
		explicit Jet(string brand, string model, string fuelType, int engineNumber = 1);

	virtual ~Jet();
	int getEngineNumber();
	void setEngineNumber(int engineNumber);
	virtual double mileageEstimate(double time);
	virtual string toString();



};

#endif
