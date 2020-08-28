/* 
 * File:   MiniDuckSimulator.cpp
 * Author: Adair
 *
 * Created on August 27, 2020, 1:51 PM
 */

#include <cstdlib>

#include "Duck.hpp"
#include "MallardDuck.hpp"
#include "FlyNoWay.hpp"
#include "FlyWithWings.hpp"
#include "MuteQuack.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    MallardDuck mallard;
    
    mallard.display();
    mallard.performFly();
    mallard.performQuack();
    
    mallard.setFlyBehavior(new FlyNoWay());
    mallard.setQuackBehavior(new MuteQuack());
    mallard.display();
    mallard.performFly();
    mallard.performQuack();
        
    return 0;
}

