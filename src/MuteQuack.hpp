/* 
 * File:   MuteQuack.hpp
 * Author: Adair
 *
 * Created on August 27, 2020, 7:30 PM
 */

#ifndef MUTEQUACK_HPP
#define MUTEQUACK_HPP

#include <iostream>
#include "QuackBehavior.hpp"

class MuteQuack : public QuackBehavior{

public:
    MuteQuack(){};
    virtual ~MuteQuack(){};
    
    void quack(){ std::cout << "\n<< Silence >>\n"; }

};

#endif /* MUTEQUACK_HPP */

