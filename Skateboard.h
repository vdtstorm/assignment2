// Vinson Thomas(vdt16)
 
#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"
class Skateboard : public Vehicle
{
private:
	string typeOfWood;
	
public:
	explicit Skateboard(string brand, string model, string wood); 
	string getBoardWood();
	void setBoardWood(string wood);
	virtual ~Skateboard(); 
	virtual double mileageEstimate(double time); 
	virtual string toString();
};



#endif
