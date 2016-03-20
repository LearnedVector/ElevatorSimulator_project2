//
//  RandomPassenger.cpp
//  ElevatorSimulator_project2
//
//  Created by Michael Nguyen on 3/19/16.
//  Copyright © 2016 umkc. All rights reserved.
//

#include "RandomPassenger.hpp"

RandomPassenger::RandomPassenger(int currFloor, int destFloor, string dir){
    currentFloor = currFloor;
    destinationFloor = destFloor;
    direction = dir;
    
};


int RandomPassenger::getCurrentFloor() {
    return currentFloor;
};

int RandomPassenger::getDestinationFloor() {
    return destinationFloor;
};

string RandomPassenger::getDirection() {
    return direction;
};

