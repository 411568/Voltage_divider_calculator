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
    int inputVoltage{};
    int outputVoltage{};

    //intro text
    std::cout << "Welcome to the voltage divider calculator!" << std::endl;
    std::cout << "Please enter the input voltage [V]: " << std::endl;
    std::cin >> inputString;

    //check input
    while (isNumber(inputString) == false)
    {
        std::cout << "Please enter a number [V]: " << std::endl;
        std::cin >> inputString;
    }

    inputVoltage = stoi(inputString);
    
    std::cout << "Please enter the desired output voltage [V]: " << std::endl;
    std::cin >> inputString;

    //check input
    while (isNumber(inputString) == false || stoi(inputString) >= inputVoltage)
    {
        std::cout << "Please enter a number [V]: " << std::endl;
        std::cin >> inputString;
    }

    outputVoltage = stoi(inputString);

    //main object that does the computations
    VoltageDivider VoltDiv(inputVoltage, outputVoltage);


    return 0;
}
