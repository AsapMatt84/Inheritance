//Matthew Cahill
//CIS 1202 5T1
//July 27, 2021

#include "Vehicle.hpp"
#include "Car.hpp"
#include "Truck.hpp"
#include <iostream>
#include <string>
using namespace std;


int main() {
    string makeInput;
    int yearInput, doorInput, towingCapacity;
   
    //Vehicle
    cout << "Vehicle Program" << endl;
    cout << endl;
    cout << "Vehicle:" <<endl;
    cout << "Enter the manufacturer: ";
    getline(cin, makeInput);
    cout << "Enter the year built: ";
    cin >> yearInput;
    Vehicle Vehicle(makeInput, yearInput);
    Vehicle.displayInfo();
    //Car
    cout << "Car:" <<endl;
    cout << "Enter the manufacturer: ";
    cin.ignore();
    getline(cin, makeInput);
    cout << "Enter the year built: ";
    cin >> yearInput;
    cout << "Enter the number of doors: ";
    cin >> doorInput;
    Car Car(makeInput, yearInput, doorInput);
    Car.displayInfoCar();
    //Truck
    cout << "Car:" <<endl;
    cout << "Enter the manufacturer: ";
    cin.ignore();
    getline(cin, makeInput);
    cout << "Enter the year built: ";
    cin >> yearInput;
    cout << "Enter the towning capacity: ";
    cin >> towingCapacity;
    Truck Truck(makeInput,yearInput,towingCapacity);
    Truck.displayInfoTruck();
    
    return 0;
    
}
