//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#ifndef Vehicle_hpp
#define Vehicle_hpp

#include <iostream>
#include <string>
using namespace std;
//Base class
class Vehicle{
    private:
    string manufacturer;
    int yearBuilt;
    
public:
    Vehicle();//Default Constructor
    Vehicle(string maker, int year);//Constructor
    
    //Accessors
    string getManufacturer() const;
    int getYearBuilt() const;
    void displayInfo() const;
};
#endif /* Vehicle_hpp */
