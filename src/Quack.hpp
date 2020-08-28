/* 
 * File:   Quack.hpp
 * Author: Adair
 *
 * Created on August 27, 2020, 7:27 PM
 */

#ifndef QUACK_HPP
#define QUACK_HPP

#include <iostream>
#include "QuackBehavior.hpp"

class Quack : public QuackBehavior{

public:

    Quack(){};
    virtual ~Quack(){};
    
    void quack(){ std::cout << "\nQuack!\n"; }
};

#endif /* QUACK_HPP */

