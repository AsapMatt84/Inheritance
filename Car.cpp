//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#include "Car.hpp"
#include <iostream>
#include <string>
using namespace std;
//Default Constructor
Car::Car() : Vehicle (){
    doorCount = 0;
}
//Constructor
Car::Car(string maker, int year, int doors) : Vehicle(maker, year){
    doorCount = doors;
}
//Display Car information
void Car::displayInfoCar() const{
    cout << "Vehicle information:" << endl;
    cout << "Manfacturer: "<< getManufacturer() << endl;
    cout << "Year Built: " << getYearBuilt() << endl;
    cout << "Doors: " << doorCount << endl;
    cout << endl;
}
