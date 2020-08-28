/* 
 * File:   QuackBehavior.hpp
 * Author: Adair
 *
 * Created on August 27, 2020, 7:21 PM
 */

#ifndef QUACKBEHAVIOR_HPP
#define QUACKBEHAVIOR_HPP

class QuackBehavior {

public:
    
    QuackBehavior(){};
    virtual ~QuackBehavior(){};
    
    virtual void quack() = 0;

};

#endif /* QUACKBEHAVIOR_HPP */

