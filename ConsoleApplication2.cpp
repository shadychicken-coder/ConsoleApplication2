// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctgmath>
using namespace std;
double containerMax = 2.76;
double costPerContainer = 4.12;
double profitPerContainer = 1.45;

int main()
{
    
    int cheese = 0;
    int containers = 0.0;
    

    //welcome screen
    cout << string(55, '*') << endl;
    cout << string(15, '*') << " Welcome to my GitHUB Cheesy Program " << string(10, '*') << endl;
    cout << string(55, '*') << endl;


    //prompt
    cout << "Please enter the total number of kilograms of cheese produced: " << ends;
    cin >> cheese;

    //calculating number of containers
    containers = round(cheese / containerMax);
    cout <<   "The number of containers to hold the cheese is: " << right << setw(31) << containers << endl;
    
    //displaying cost of containers & producing integer in a string
    string s1 = "The cost of producing " + to_string(containers) + " container(s) of cheese is: $";
    cout << setw(10) << left  << s1 << setw(25) << right  << containers * costPerContainer << endl;

    //displaying the profit
    string s2 = "The profit from producing " + to_string(containers) + " container(s) of cheese is: $";
    cout << setw(10) << left << s2 << setw(20) << right << containers* profitPerContainer << endl;
   
    

}
