#pragma once
#include <map>
#include <vector>
#include <string>
#include <cassert>

class VoltageDivider
{
private:
	int inputVoltage;
	int outputVoltage;
	double ratio;
	std::map<std::string, std::vector<std::string>> resistorValues;

public:
	VoltageDivider(const int inputV, const int outputV);
};

