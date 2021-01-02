// CPPBulbSaver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>


void printHeader() {
    std::cout << std::endl << "This console app is to determine cost savings to switch to LED bulbs" << std::endl;
    std::cout << "====================================================================" << std::endl;
    // (note: you may have to contact power company)
}

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

void calculating() {
    std::cout << std::endl << std::endl;
    std::cout << "Calculating .... " << std::endl;
    Sleep(1000);
}

double powerRate() {
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "First, what is your power rate? > " << std::flush;
    double powerRate;
    std::cin >> powerRate;
    return powerRate;
}

int howManyBulbs() {
    std::cout << "How many light bulbs? > " << std::flush;
    int howManyBulbs;
    std::cin >> howManyBulbs;
    return howManyBulbs;
}

int howManyWattsCurrently() {
    std::cout << "How many watts are current bulbs? > " << std::flush;
    int currentWatts;
    std::cin >> currentWatts; 
    return currentWatts;
}

int howManyWattsNewBulbs() {
    std::cout << "How many watts will the new bulbs be? > " << std::flush;
    int replacementWatts;
    std::cin >> replacementWatts;
    return replacementWatts;
}

double howManyHoursUsed() {
    std::cout << "How many hours used? > " << std::flush;
    double howManyHours;
    std::cin >> howManyHours;
    return howManyHours;
}

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

double howMuchNewBulbCost() {
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "How much will the led bulbs cost? > " << std::flush;
    double ledBulbCost;
    std::cin >> ledBulbCost;
    return ledBulbCost;
}
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
