//
//  Elevator.cpp
//  ElevatorSimulator_project2
//
//  Created by Michael Nguyen on 3/19/16.
//  Copyright © 2016 umkc. All rights reserved.
//

#include "Elevator.hpp"


//if on windows use this timer function
#ifdef _WIN32
#include <windows.h>
void startTimer(){
    Sleep(1);
};
//if on unix use this timer Function
#else
#include <unistd.h>
void startTimer(){
    sleep(1);
};
#endif

Elevator::Elevator(){
    Direction = "up";
    currFloorNum = 0;
};

string Elevator::getDirection(){
    return Direction;
};

int Elevator::getCurrFloor(){
    return currFloorNum;
};

void Elevator::setDirection(string newDirection){
    Direction = newDirection;
}

void Elevator::setCurrFloor(int newFloor){
    currFloorNum = newFloor;
};

void Elevator::moveUp(){
    for(int i = 0; i < 3; i++ ){
        cout << "^" << endl;
//        startTimer();
    }
    currFloorNum++;
};

void Elevator::moveDown(){
    for(int i = 0; i < 3; i++ ){
        cout << "v" << endl;
//        startTimer();
    }
    currFloorNum--;
};
void Elevator::stop(){
    cout << "["<< getCurrFloor() << "]";
};

void Elevator::pickup(){
    cout << " ~(˘▾˘~)" << endl;
//    startTimer();
};

void Elevator::dropOff(){
    cout << "(>￣ .￣)>" << endl;
}
