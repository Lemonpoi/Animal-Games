
#include "WaterBoiler.h"

using namespace StatePattern;

int main()
{
	WaterBoiler* waterBoiler = new WaterBoiler(1);

	waterBoiler->insertQuarter();
	waterBoiler->turnCrank();
    waterBoiler->ejectQuarter();

	delete waterBoiler;
}