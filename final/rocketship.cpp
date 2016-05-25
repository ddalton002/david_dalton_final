/*
 * Name        : rocketship.cpp
 * Author      : David Dalton
 * Description : Till touch down brings me round again to find
 */

#include "rocketship.h"

/**
 * sets name_ equal to "RS NullPointer" and fuel_ equal to 1000
 * on object creation
 */
RocketShip::RocketShip() 
{
    name_ = "RS NullPointer";
    fuel_ = 1000;
}
/**
 * sets name_ equal to newName and fuel_ equal to newFuel
 */
RocketShip::RocketShip(string newName, unsigned int newFuel) 
{
    name_ = newName;
    fuel_ = newFuel;
}
/**
 * sets name_ equal to the input string
 */
void RocketShip::setName(string name) 
{
    name_ = name;
}
/**
 * retrieves the value of name_ and returns it
 */
string RocketShip::getName() const
{
    return name_;
}
/**
 * sets the value of fuel_ equal to the input int
 */
void RocketShip::setFuel(unsigned int fuel) 
{
    fuel_ = fuel;
}
/**
 * retrieves the value of fuel_ and returns it
 */
unsigned int RocketShip::getFuel() const
{
    return fuel_;
}
/**
 * add a new element to fuelCells to contain fuelAmount
 */
void RocketShip::addFuelCell(unsigned int fuelAmount) 
{
    it = fuelCells.begin();
    it = fuelCells.insert (it, fuelAmount);
}
/**
 * removes the specified cell (0-indexed) from fuelCells
 */
bool RocketShip::removeFuelCell(unsigned int cellNumber) 
{
    bool fuelRemoved;
    if((fuelCells.size() > 0) &&(cellNumber < fuelCells.size()))
    {
        fuelCells.erase(fuelCells.begin() + cellNumber);
        fuelRemoved = true;
    } else
    {
        fuelRemoved = false;
    }
    return fuelRemoved;
}
/**
 * add fuelAmount to the specified fuelCell (0-indexed)
 */
bool RocketShip::addFuelToCell(unsigned int cellNumber,
                              unsigned int fuelAmount)
{
    bool fuelAdded;
    if((fuelCells.size() > 0) && (cellNumber < fuelCells.size()))
    {
        it = fuelCells.begin();
        fuelCells.insert (it + cellNumber, fuelAmount);
        unsigned int vectorFuel = fuelCells.at(cellNumber);
        if(vectorFuel == fuelAmount)
        {
            fuelAdded = true;
        } else
        {
            fuelAdded = false;
        }
    } else 
    {
        fuelAdded = false;
    }
    return fuelAdded;
}
/**
 * zero out/burn all of the fuel in the specified cell (0-indexed)
 * returns a string of asterisks representing the fuel in the cell
 */
string RocketShip::burnFuel(unsigned int cellNumber) 
{
    stringstream fuelBurnt;
    string fuel;
    if((fuelCells.size() > 0) && (cellNumber < fuelCells.size()))
    {
        unsigned int burnedFuel = fuelCells.at(cellNumber);
        if(burnedFuel > 0)
        {
            for(unsigned int i = 0; i<burnedFuel; i++)
            {
                fuelBurnt << "*";
            }
            fuel = fuelBurnt.str();
        }
        fuelCells.at(cellNumber) = 0;
    } else
    {
        fuel = "";
    }
    return fuel;
}

