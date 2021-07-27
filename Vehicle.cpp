//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#include <iostream>
#include <string>
#include "Vehicle.hpp"
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
