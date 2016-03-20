//
//  RandomPassenger.hpp
//  ElevatorSimulator_project2
//
//  Created by Michael Nguyen on 3/19/16.
//  Copyright © 2016 umkc. All rights reserved.
//

#ifndef RandomPassenger_hpp
#define RandomPassenger_hpp

#include <stdio.h>
#include <string>
using namespace std;

class RandomPassenger {
  
private:
    int currentFloor;
    int destinationFloor;
    string direction;

public:
    //constructor
    RandomPassenger(int currFloor, int destFloor, string dir);
    
    //getters
    int getCurrentFloor();
    int getDestinationFloor();
    string getDirection();
    
    //setter
    void setRandom();
    
    //methods
    int randomFloor();
    string randomDirection();
    
};

#endif /* RandomPassenger_hpp */
