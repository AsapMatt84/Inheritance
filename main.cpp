//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#include "Vehicle.hpp"
#include "Car.hpp"
#include <iostream>
#include <string>
using namespace std;


int main() {
    string makeInput;
    int yearInput;
    
    //Vehicle
    cout << "Vehicle Program" << endl;
    cout << endl;
    cout << "Vehicle:" <<endl;
    cout << "Enter the manufacturer: ";
    cin >> makeInput;
    cout << "Enter the year built: ";
    cin >> yearInput;
    Vehicle Vehicle(makeInput, yearInput);
    //Car
    
    return 0;
    
}
