//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#ifndef Car_hpp
#define Car_hpp

#include "Vehicle.hpp"
#include <iostream>
#include <string>
using namespace std;
//Derived class
class Car : public Vehicle{
    protected:
        int doorCount;
    
    public:
        Car();
        Car(string maker, int year, int doors);
};


#endif /* Car_hpp */
