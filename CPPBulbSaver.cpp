// CPPBulbSaver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<Windows.h>


void printHeader() {
    std::cout << std::endl << "This console app is to determine cost savings to switch to LED bulbs" << std::endl;
    std::cout << "====================================================================" << std::endl;
    // (note: you may have to contact power company)
}

void printResults() {
    std::cout << "Electricity Costs " << std::endl;
    std::cout << "Current cost is: $" << std::endl;
    std::cout << "LED Bulb cost would be approx: $" << std::endl;
    std::cout << "Savings" << std::endl;
    std::cout << "Payback Timeline" << std::endl;
    std::cout << "Total Replacement Cost $" << std::endl;
    std::cout << "Payoff Period " << std::endl;
    std::cout << "Electrical Usage " << std::endl;
    std::cout << "Before Replacing Lamps " << std::endl;
    std::cout << "After Replacing Lamps " << std::endl;
    std::cout << "Savings " << std::endl;
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


    // Prints the message Calculating...
    calculating();
    // Prints the calculated results
    printResults();
   

    // double currCost;
    // double ledApprox;

    //double fixtWatts = watts * howManyB; // how many watts total

    //double kwh = fixtWatts * howManyh / 1000;
    //double monthlyKWH = kwh * 30;

    //double aftFixtWatts = Convert.ToDouble(tbRepWatts.Text) * howManyB; // how many watts total
    //double afterKwh = aftFixtWatts * howManyh / 1000;
    //double afterMonthlyKWH = afterKwh * 30;

    //currCost = kwh * rate;
    //double monthlyCost = monthlyKWH * rate;
    //double afterMonthlyCost = afterMonthlyKWH * rate;
}
