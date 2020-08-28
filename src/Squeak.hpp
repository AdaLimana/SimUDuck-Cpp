/* 
 * File:   Squeak.hpp
 * Author: Adair
 *
 * Created on August 27, 2020, 7:32 PM
 */

#ifndef SQUEAK_HPP
#define SQUEAK_HPP

#include <iostream>
#include "QuackBehavior.hpp"


class Squeak : public QuackBehavior{

public:
    Squeak(){};
    virtual ~Squeak(){};

    void quack(){ std::cout << "\nSqueak!\n"; }
};

#endif /* SQUEAK_HPP */

