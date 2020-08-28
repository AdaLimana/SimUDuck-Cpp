/*
 * File:   FlyNoWay.hpp
 * Author: imortal
 *
 * Created on August 27, 2020, 5:24 PM
 */

#ifndef FLYNOWAY_HPP
#define FLYNOWAY_HPP

#include <iostream>
#include "FlyBehavior.hpp"


class FlyNoWay : public FlyBehavior {

public:

    FlyNoWay(){};
    virtual ~FlyNoWay(){};

    void fly(){ std::cout << "\nI'm can't fly!\n"; }
    
private:

};

#endif /* FLYNOWAY_HPP */

