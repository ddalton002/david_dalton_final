/*
 * Name        : rocketship.cpp
 * Author      : David Dalton
 * Description : Oh no, no, no, I'm a rocket man
 */
 
#include "specialrocketship.h"

/**
 * default constructor
 */
SpecialRocketShip::SpecialRocketShip() 
{
    name_ = "RS Cloaky";
    fuel_ = 1000;
    cloaked_ = false;
}
/**
 * mutator for cloaked_
 */
void SpecialRocketShip::setCloaked(bool cloaked) 
{
    cloaked_ = cloaked;
}
/**
 * accessor for cloaked_
 */
bool SpecialRocketShip::getCloaked() const
{
    return cloaked_;
}