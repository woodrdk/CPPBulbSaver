// CPPBulbSaver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>



int main()
{
    // (note: you may have to contact power company)
    std::cout << std::endl << "This console app is to determine cost savings to switch to LED bulbs" << std::endl;
    std::cout << "====================================================================" << std::endl;

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "First, what is your power rate? > " << std::flush;
    double powerRate;
    std::cin >> powerRate;
    
    std::cout << "How many light bulbs? > " << std::flush;
    int howManyBulbs;
    std::cin >> howManyBulbs;

    std::cout << "How many hours used? > " << std::flush;
    double howManyHours;
    std::cin >> howManyHours;

    std::cout << "How many watts are current bulbs? > " << std::flush;
    int currentWatts;
    std::cin >> currentWatts;

    std::cout << "How many watts will the new bulbs be? > " << std::flush;
    int replacementWatts;
    std::cin >> replacementWatts;

    std::cout << std::endl << std::endl;
    std::cout << "Calculating .... " << std::endl;
    
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

    double currCost;
    double ledApprox;

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
