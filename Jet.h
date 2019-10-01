// vinson Thomas(vdt16)
// 9/30/19

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
	void setEngineNumber();
	virtual double mileageEstimate(double time);
	virtual string toString();



};

#endif
