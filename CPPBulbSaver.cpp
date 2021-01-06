// CPPBulbSaver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/// Robert Wood Jr.
/// 1/5/2021
/// Bulb Saver App 
/// Converted this app I wrote previously from C# to C++ for practice with C++
/// 
#include <iostream>
#include<Windows.h>

/// <summary>
///  This will print out the header to the program
/// </summary>
void printHeader() {
    std::cout << std::endl << "This console app is to determine cost savings to switch to LED bulbs" << std::endl;
    std::cout << "====================================================================" << std::endl;
    // (note: you may have to contact power company)
}

/// <summary>
/// this will print out the results of the calculations
/// </summary>
/// <param name="monthlyCost"> the monthly cost currently</param>
/// <param name="afterMonthlyCost">the monthly cost after changing to led</param>
/// <param name="payOffCost"> how much to pay off bulbs</param>
/// <param name="monthlyKWH">how many KWH monthly currently used</param>
/// <param name="afterMonthlyKWH">how many KWH monthly used after led change</param>
void printResults( double monthlyCost, double afterMonthlyCost,double payOffCost, double monthlyKWH, double afterMonthlyKWH) {
    
    double howLong = payOffCost / (monthlyCost - afterMonthlyCost);
    std::cout << "Electricity Costs " << std::endl;
    std::cout << "----------------- " << std::endl;
    std::cout << "Current cost is: $" << monthlyCost << std::endl;
    std::cout << "LED Bulb cost would be approx: $" << afterMonthlyCost << std::endl;
    std::cout << "Savings $" << monthlyCost - afterMonthlyCost << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "Payback Timeline" << std::endl;
    std::cout << "----------------- " << std::endl;
    std::cout << "Total Replacement Cost $" << payOffCost << std::endl;
    std::cout << "Payoff Period " << howLong << " Months" << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "Electrical Usage " << std::endl;
    std::cout << "----------------- " << std::endl;
    std::cout << "Before Replacing Lamps " << monthlyKWH << " KWH" << std::endl;
    std::cout << "After Replacing Lamps " << afterMonthlyKWH << " KWH" << std::endl;
    std::cout << "Savings " << monthlyKWH - afterMonthlyKWH << " KWH" << std::endl;
}

/// <summary>
/// This function will show the message calculating then wait before contnuing to display results
/// </summary>
void calculating() {
    std::cout << std::endl << std::endl;
    std::cout << "Calculating .... " << std::endl;
    Sleep(1000);
}

/// <summary>
/// this function will ask the user their power rate 
/// </summary>
/// <returns>will return the powerRate</returns>
double powerRate() {
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "First, what is your power rate? > " << std::flush;
    double powerRate;
    std::cin >> powerRate;
    return powerRate;
}

/// <summary>
/// this function will ask the user how many bulbs
/// </summary>
/// <returns>how many bulbs entered by the user</returns>
int howManyBulbs() {
    std::cout << "How many light bulbs? > " << std::flush;
    int howManyBulbs;
    std::cin >> howManyBulbs;
    return howManyBulbs;
}

/// <summary>
/// this function will ask the user their current bulbs wattages
/// </summary>
/// <returns>current bulb wattage</returns>
int howManyWattsCurrently() {
    std::cout << "How many watts are current bulbs? > " << std::flush;
    int currentWatts;
    std::cin >> currentWatts; 
    return currentWatts;
}
/// <summary>
/// this function will ask the user their led bulbs wattage
/// </summary>
/// <returns>the new led bulb wattage</returns>
int howManyWattsNewBulbs() {
    std::cout << "How many watts will the new bulbs be? > " << std::flush;
    int replacementWatts;
    std::cin >> replacementWatts;
    return replacementWatts;
}
/// <summary>
/// this function will ask the user how many hours their bulbs are used
/// </summary>
/// <returns>how many hours the bulbs are used</returns>
double howManyHoursUsed() {
    std::cout << "How many hours used? > " << std::flush;
    double howManyHours;
    std::cin >> howManyHours;
    return howManyHours;
}

/// <summary>
/// calculates the results of the led bulb conversion
/// </summary>
/// <param name="powerCostRate">rate of power cost</param>
/// <param name="howManyBulbsUsed">how many bulbs are used</param>
/// <param name="howManyHours">how many hours bulbs are used</param>
/// <param name="currentWatts">current bulbs wattage</param>
/// <param name="replacementWatts">led bulbs wattage</param>
/// <param name="bulbCosts"> the cost of the bulbs</param>
void calculate(double powerCostRate, int howManyBulbsUsed, double howManyHours, int currentWatts, int replacementWatts, double bulbCosts) {
    double currCost;
    double ledApprox;
    
    double fixtWatts = currentWatts * howManyBulbsUsed; // how many watts total

    double kwh = fixtWatts * howManyHours / 1000;
    double monthlyKWH = kwh * 30;

    double aftFixtWatts = replacementWatts * howManyBulbsUsed; // how many watts total
    double afterKwh = aftFixtWatts * howManyHours / 1000;
    double afterMonthlyKWH = afterKwh * 30;

    currCost = kwh * powerCostRate;
    double monthlyCost = monthlyKWH * powerCostRate;
    double afterMonthlyCost = afterMonthlyKWH * powerCostRate;

    double payOffCost =  bulbCosts* howManyBulbsUsed;
    // Prints the calculated results
    printResults( monthlyCost, afterMonthlyCost, payOffCost, monthlyKWH, afterMonthlyKWH);
}

/// <summary>
/// this function will ask the user how much led bulb will cost
/// </summary>
/// <returns>cost of led bulb</returns>
double howMuchNewBulbCost() {
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "How much will the led bulbs cost? > " << std::flush;
    double ledBulbCost;
    std::cin >> ledBulbCost;
    return ledBulbCost;
}
/// <summary>
/// this will take user inputs and determine the cost savings of converting to led bulbs
/// </summary>
/// <returns></returns>
int main()
{
    // Prints opening header 
    printHeader();
    // This line gets the power cost rate
    double powerCostRate = powerRate() ;
    // This line returns how many lightbulbs
    int howManyBulbsUsed = howManyBulbs();
    // This line gets how many hours used
    double howManyHours = howManyHoursUsed();
    // This line will get current bulb wattage
    int currentWatts = howManyWattsCurrently();
    // This line will get replacement bulb wattage
    int replacementWatts = howManyWattsNewBulbs();
    
    double bulbCosts = howMuchNewBulbCost();

    // Prints the message Calculating...
    calculating();
    calculate(powerCostRate, howManyBulbsUsed, howManyHours, currentWatts, replacementWatts, bulbCosts);


}
