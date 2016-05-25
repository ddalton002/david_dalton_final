/*
 * Name        : rocketship.h
 * Author      : David Dalton
 * Description : and I think it's gonna be a long, long time
 */
 
#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::stringstream;
 
class RocketShip 
{
    public:
    /**
     * default constructor
     */
     RocketShip();
    /**
     * overloaded constructor
     */
     RocketShip(string newName, unsigned int newFuel);
    /**
     * mutator for name
     */
     void setName(string name);
    /**
     * accessor for name
     */
     string getName() const;
    /**
     * mutator for fuel
     */
     void setFuel(unsigned int fuel);
    /**
     * accessor for fuel
     */
     unsigned int getFuel() const;
    /**
     * add a new element to fuelCells to contain fuelAmount
     */
     void addFuelCell(unsigned int fuelAmount);
    /**
     * removes the specified cell (0-indexed) from fuelCells
     */
     bool removeFuelCell(unsigned int cellNumber);
    /**
     * add fuelAmount to the specified fuelCell (0-indexed)
     */
     bool addFuelToCell(unsigned int cellNumber,
                                   unsigned int fuelAmount);
    /**
     * zero out/burn all of the fuel in the specified cell (0-indexed)
     * returns a string of asterisks representing the fuel in the cell
     */                              
     string burnFuel(unsigned int cellNumber);
    
    protected: 
    /**
     * string variable representing the name of the ship object
     */
     string name_;
    /**
     * unsigned int variable represnting the amount of fuel of the ship object
     */
     unsigned int fuel_;
    /**
     * each element of the vector represents a fuel cell
     * with a specific amount of (unsigned int) of fuel
     */
     vector<unsigned int> fuelCells;
     vector<unsigned int>::iterator it;
};

#endif