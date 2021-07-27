//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    private:
    string manufacturer;
    int yearBuilt;
    
public:
    //Default Constructor
    Vehicle();
    
    //Constructor
    Vehicle(string maker, int year);
    
    //Accessors
    string getManufacturer() const;
    int getYearBuilt() const;
    
    
};

#endif /* Vehicle_hpp */
