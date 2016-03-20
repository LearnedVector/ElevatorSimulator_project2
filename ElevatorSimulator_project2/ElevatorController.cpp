//
//  ElevatorController.cpp
//  ElevatorSimulator_project2
//
//  Created by Michael Nguyen on 3/19/16.
//  Copyright © 2016 umkc. All rights reserved.
//

#include "ElevatorController.hpp"
#include <algorithm>

//void ElevatorController::chooseQueue(int fromFloor, string newDirection, string currElevatorDirection){
//    
//}

bool ElevatorController::areQueuesEmpty(){
    if (!upHeap.empty() || !downHeap.empty() || !tempHeap.empty())
        return true;
    else
        return false;
}

bool ElevatorController::isTopQueueEmpty(){
    if (upHeap.empty())
        return true;
    else
        return false;
}

int ElevatorController::getFloorFromQueue(string currElDirection){
    int floor;
    currElDirection == "up" ? floor = upHeap.front() : floor = downHeap.front();
    return floor;
};

void ElevatorController::chooseQueue(int floor, string elevatorDirection){
    elevatorDirection == "up" ? addFloorToUpQueue(floor) : addFloorToDownQueue(floor);
}

void ElevatorController::addFloorToUpQueue(int floorNum){
    upHeap.push_back(floorNum);
    make_heap(upHeap.begin(), upHeap.end());
    sort_heap(upHeap.begin(), upHeap.end());
    
};
void ElevatorController::addFloorToDownQueue(int floorNum){
    downHeap.push_back(floorNum);
    make_heap(downHeap.begin(), downHeap.end());
};

void ElevatorController::addFloorToTempQueue(int floorNum){
    tempHeap.push_back(floorNum);
    make_heap(upHeap.begin(), tempHeap.end());
};

void ElevatorController::removeFloorFromUpQueue(){
    pop_heap(upHeap.begin(), upHeap.end());
    upHeap.pop_back();
    sort(upHeap.begin(), upHeap.end());
};
void ElevatorController::removeFloorFromDownQueue(){
    pop_heap(downHeap.begin(), downHeap.end());
    downHeap.pop_back();
};

void ElevatorController::removeFloorFromTempQueue(){
    pop_heap(tempHeap.begin(), tempHeap.end());
    tempHeap.pop_back();
};
