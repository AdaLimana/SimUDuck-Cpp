/* 
 * File:   FlyWithWings.hpp
 * Author: Adair
 *
 * Created on August 27, 2020, 1:35 PM
 */

#ifndef FLYWITHWINGS_HPP
#define FLYWITHWINGS_HPP

#include <iostream>
#include "FlyBehavior.hpp"


class FlyWithWings : public FlyBehavior{
    
public:
    
    FlyWithWings(){};
    virtual ~FlyWithWings(){};

    void fly(){ std::cout << "\nI'm flying!\n"; }

private:

};

#endif /* FLYWITHWINGS_HPP */

