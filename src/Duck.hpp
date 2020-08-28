/* 
 * File:   Duck.hpp
 * Author: Adair
 *
 * Created on August 27, 2020, 12:20 PM
 */

#ifndef DUCK_HPP
#define DUCK_HPP

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"


class Duck {
    

private:
    
    //ATTRIBUTES
    FlyBehavior *flyBehavior = nullptr;      
    QuackBehavior *quackBehavior = nullptr;
    
public:
        
    Duck();
    virtual ~Duck();
    
    //SETTERS
    void setFlyBehavior(FlyBehavior *fb);
    void setQuackBehavior(QuackBehavior *qb);    
    
    void performFly();
    
    void performQuack();
    
    virtual void display() = 0;
    
};  

#endif /* DUCK_HPP */

