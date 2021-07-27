//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#include <iostream>
#include <string>
#include "Vehicle.hpp"

int main() {
    string makeInput;
    int yearInput;\
    
    //Vehicle
    cout << "Vehicle Program" << endl;
    cout << endl;
    cout << "Vehicle:" <<endl;
    cout << "Enter the manufacturer: ";
    cin >> makeInput;
    cout << "Enter the year built: ";
    cin >> yearInput;
    Vehicle Vehicle(makeInput, yearInput);
    cout << "Vehicle information:" << endl;
    cout << "Manfacturer: "<< Vehicle.getManufacturer() << endl;
    cout << "Year Built: " << Vehicle.getYearBuilt() << endl;
    cout << endl;
    //Car
    
    return 0;
    
}
