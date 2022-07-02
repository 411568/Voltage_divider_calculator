/*
    Author: Krzysztof Sikora
*/
#include <iostream>
#include <string>
#include "additionalFunctions.h"
#include "VoltageDivider.h"

int main()
{
    //variables
    std::string inputString;
    double inputVoltage{};
    double outputVoltage{};

    //intro text
    std::cout << "Welcome to the voltage divider calculator!" << std::endl;
    std::cout << "Please enter the input voltage [V]: " << std::endl;
    std::cin >> inputString;

    //check input
    while (isNumber(inputString) == false)
    {
        std::cout << "Please enter a valid value! " << std::endl;
        std::cin >> inputString;
    }

    inputVoltage = stod(inputString);
    
    std::cout << "Please enter the desired output voltage [V]: " << std::endl;
    std::cin >> inputString;

    //check input
    while (isNumber(inputString) == false || stod(inputString) > inputVoltage)
    {
        std::cout << "Please enter a valid value! " << std::endl;
        std::cin >> inputString;
    }

    outputVoltage = stod(inputString);

    std::cout << std::endl;

    //main object that does the computations
    VoltageDivider VoltDiv(inputVoltage, outputVoltage);

    //calculate and get all the values
    std::vector<std::string> VoltDivOutput = VoltDiv.calculateValues();

    //print the values for every series
    for (auto line : VoltDivOutput)
    {
        std::cout << line << std::endl;
    }


    return 0;
}
