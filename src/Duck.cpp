/* 
 * File:   Duck.cpp
 * Author: Adair
 * 
 * Created on August 27, 2020, 12:20 PM
 */

#include "Duck.hpp"

Duck::Duck() {}

Duck::~Duck() {
    delete flyBehavior;
    delete quackBehavior;
}

void Duck::setFlyBehavior(FlyBehavior* fb) {
    delete flyBehavior;
    flyBehavior = fb;
}

void Duck::setQuackBehavior(QuackBehavior* qb){
    delete quackBehavior;
    quackBehavior = qb;
}

void Duck::performFly() {
    flyBehavior->fly();
}

void Duck::performQuack() {
    quackBehavior->quack();
}