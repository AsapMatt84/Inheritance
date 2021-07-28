//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#ifndef Truck_hpp
#define Truck_hpp
#include "Vehicle.hpp"
#include <iostream>
#include <string>
using namespace std;
//Derived class
class Truck : public Vehicle{
    protected:
        int towCapacity;
    public:
    Truck(); //Default Constructor
    Truck(string maker, int year, int towCapacity);//Constructor
    void displayInfoTruck() const; //Display Car information
};

#endif /* Truck_hpp */
