//
//  main.cpp
//  ElevatorSimulator_project2
//
//  Created by Michael Nguyen on 3/18/16.
//  Copyright © 2016 umkc. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Elevator.hpp"
#include "ElevatorController.hpp"

int randomFloor(){
    int rando = rand() % 5;
    return rando;
};

string randomDirection(){
    string randoString;
    int randoNum = rand()%2;
    randoNum >= 1 ? randoString = "up": randoString = "down";
    return randoString;
};

int main(int argc, const char * argv[]) {
    
    //instantiate
    Elevator Elevator;
    ElevatorController ElevatorCon;
    int userInputFloorNum;
    srand( static_cast<unsigned int>(time(NULL))); //seeding the random generator
    
    //start
    cout << "Welcome my elevator Elevator\nYou are currently in the lobby \nPlease choose a floor 0-4" << endl;
    cin >> userInputFloorNum;
    cout << " ~(˘▾˘~)" << endl;
    
    ElevatorCon.addFloorToUpQueue(userInputFloorNum);
    ElevatorCon.addFloorToUpQueue(4);
    ElevatorCon.addFloorToUpQueue(3);
    

    ElevatorCon.addFloorToDownQueue(2);
    ElevatorCon.addFloorToDownQueue(1);
    ElevatorCon.addFloorToDownQueue(3);
    
    while (ElevatorCon.areQueuesEmpty()){
        
        //see which direction the elevator is in
        Elevator.getDirection() == "up" ? Elevator.moveUp() : Elevator.moveDown();
        
        //if current floor is same as floor in priorty queue execute this block
        if (Elevator.getCurrFloor() == ElevatorCon.getFloorFromQueue(Elevator.getDirection())){
        
            Elevator.stop();
            Elevator.getCurrFloor() == userInputFloorNum ? Elevator.dropOff() : Elevator.pickup();
            Elevator.getDirection() == "up" ? ElevatorCon.removeFloorFromUpQueue() : ElevatorCon.removeFloorFromDownQueue();
        
        };
        
        //if current queue is empty then switch direction or go back to lobby
        ElevatorCon.isTopQueueEmpty() ? Elevator.setDirection("down") : Elevator.setDirection("up");
    }
    
    return 0;
}

/*
 Algo
 
 this will be a simulation in first person view
 4 random users will be generated while you are on the elevator ride
 
 1. start at bottom floor
 2. ask user to pick a floor from 1-10
 3. if floor > 1 go up
 4. random up/down floor inputs while moving
 5. if currFloor == next floor on queue stop
 6. pickup and person and a random floor will be chosen
 7. add person floor num to queue
 8. if curr Queue is empty change direction
 9. repeat 4 - 9
 
 */