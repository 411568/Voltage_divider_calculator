#include "VoltageDivider.h"


VoltageDivider::VoltageDivider(const int inputV, const int outputV)
{
	//just to make sure...
	assert(inputV > outputV);

	inputVoltage = inputV;
	outputVoltage = outputV;
	ratio = outputVoltage / inputVoltage;
}
