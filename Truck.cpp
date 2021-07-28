//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#include "Truck.hpp"
#include <iostream>
#include <string>
using namespace std;
//Default Constructor
Truck::Truck() : Vehicle(){
    towCapacity = 0;
}
//Constructor
Truck::Truck(string maker, int year, int towCap) : Vehicle(maker, year){
    towCapacity = towCap;
    
}
//Display Truck information
void Truck::displayInfoTruck() const{
    cout << "Vehicle information:" << endl;
    cout << "Manfacturer: "<< getManufacturer() << endl;
    cout << "Year Built: " << getYearBuilt() << endl;
    cout << "Towing Compacity: " << towCapacity << endl;
    cout << endl;
}
