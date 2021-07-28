//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#include "Vehicle.hpp"
#include <iostream>
#include <string>
using namespace std;

//Default Constructor
Vehicle::Vehicle(){
    manufacturer = " ";
       yearBuilt = 0;
}
//Constructor
Vehicle::Vehicle(string maker, int year){
    manufacturer = maker;
       yearBuilt = year;
}
//Accessors//
//Get Vehicle Manufacturer name
string Vehicle::getManufacturer() const{
    return manufacturer;
}
//Get Vehicle Year Build
int Vehicle::getYearBuilt() const{
    return yearBuilt;
}
// Display information for Vehicle
void Vehicle::displayInfo() const{
    cout << "Vehicle information:" << endl;
    cout << "Manfacturer: "<< getManufacturer() << endl;
    cout << "Year Built: " << getYearBuilt() << endl;
    cout << endl;
}
