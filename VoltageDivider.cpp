#include "VoltageDivider.h"


VoltageDivider::VoltageDivider(const double inputV, const double outputV)
{
	//just to make sure...
	assert(inputV > outputV);

	inputVoltage = inputV;
	outputVoltage = outputV;
	ratio = outputVoltage / inputVoltage;
}


std::vector<double> VoltageDivider::calculateRatio(std::vector<int>, double desiredRatio)
{
	std::vector<double> answer = { 0, 0, 0 };

	//find the best resistor values
	//in progress


	return answer;
}


std::vector<std::string> VoltageDivider::calculateValues()
{
	std::vector<std::string> answerVector;
	std::vector<double> temp;
	double outV{};
	int res1{};
	int res2{};
	std::string tempString;

	for (auto series : resistorValues)
	{
		tempString = "";
		tempString += series.first;

		temp = calculateRatio(series.second, ratio);
		outV = inputVoltage * temp[0];

		tempString += " output voltage: ";
		tempString += outV;
		tempString += " with resistors: ";
		tempString += res1 + " and " + res2;

		answerVector.push_back(tempString);
	}

	return answerVector;
}
