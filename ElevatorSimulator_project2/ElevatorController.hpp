//
//  ElevatorController.hpp
//  ElevatorSimulator_project2
//
//  Created by Michael Nguyen on 3/19/16.
//  Copyright © 2016 umkc. All rights reserved.
//

#ifndef ElevatorController_hpp
#define ElevatorController_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class ElevatorController {

private:
    vector<int> upHeap;
    vector<int> downHeap;
    vector<int> tempHeap;
    
public:
    
    //member functions
//    void chooseQueue(int fromFloor, string newDirection, string currElevatorDirection);
    void chooseQueue(int floor, string elevatorDirection);
    void chooseFloor(int floorNum);
    
    //getters
    bool areQueuesEmpty();
    bool isTopQueueEmpty();
    bool isBottomQueueEmpty();
    int getFloorFromQueue(string currElDirection);
    
    
    void addFloorToUpQueue(int floorNum);
    void addFloorToDownQueue(int floorNum);
    void addFloorToTempQueue(int floorNum);
    
    void removeFloorFromUpQueue();
    void removeFloorFromDownQueue();
    void removeFloorFromTempQueue();
    
};

#endif /* ElevatorController_hpp */
