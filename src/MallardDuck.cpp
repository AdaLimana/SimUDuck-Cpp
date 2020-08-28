/* 
 * File:   MallardDuck.cpp
 * Author: Adair
 * 
 * Created on August 27, 2020, 1:46 PM
 */

#include "MallardDuck.hpp"
#include "FlyWithWings.hpp"
#include "Quack.hpp"
#include <iostream>

MallardDuck::MallardDuck(): Duck() {
    setFlyBehavior(new FlyWithWings());
    setQuackBehavior(new Quack());
}

MallardDuck::~MallardDuck() {}

void MallardDuck::display() {
    std::cout << "\nI'm a real Mallard duck!\n";
}
