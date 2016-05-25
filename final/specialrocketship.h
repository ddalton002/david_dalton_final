/*
 * Name        : rocketship.h
 * Author      : David Dalton
 * Description : I'm not the man they think I am at home
 */
 
#ifndef SPECIAL_H
#define SPECIAL_H

#include "rocketship.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::stringstream;

/**
 * 
base class
                RocketShip

        private data members
                cloaked, bool

        public function interface
                default constructor (initial values "RS Cloaky", 1000, false)

                setCloaked, getCloaked
 */

/**
 * Class item
 */

class SpecialRocketShip : public RocketShip 
{
        public:
        /**
         * default constructor
         */
         SpecialRocketShip();
        /**
         * mutator for cloaked_
         */
         void setCloaked(bool cloaked);
        /**
         * accessor for cloaked_
         */
         bool getCloaked() const;
        
        private:
         bool cloaked_;
};

#endif