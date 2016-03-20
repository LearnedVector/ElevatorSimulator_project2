//
//  Elevator.hpp
//  ElevatorSimulator_project2
//
//  Created by Michael Nguyen on 3/19/16.
//  Copyright © 2016 umkc. All rights reserved.
//

#ifndef Elevator_hpp
#define Elevator_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Elevator {
    
private:
    
    string Direction;
    int currFloorNum;
    
public:
    //constructor
    Elevator();
    
    //getters & setters
    string getDirection();
    int getCurrFloor();
    void setDirection(string newDirection);
    void setCurrFloor(int newFloor);
    
    //methods AKA member functions
    void moveUp();
    void moveDown();
    void stop();
    void pickup();
    void dropOff();
    
};

#endif /* Elevator_hpp */
