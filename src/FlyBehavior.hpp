/* 
 * File:   FlyBehavior.hpp
 * Author: Adair
 *
 * Created on August 27, 2020, 12:22 PM
 */
#ifndef FLYBEHAVIOR_HPP
#define FLYBEHAVIOR_HPP

class FlyBehavior {

public:
    
    FlyBehavior(){};
    virtual ~FlyBehavior(){};
    
    virtual void fly() =0;
};

#endif /* FLYBEHAVIOR_HPP */