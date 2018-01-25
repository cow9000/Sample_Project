//
//  Controller.cpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 1/25/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/Controller.hpp"

Controller::Controller(){
    arrayOfChars = new char[10];
}

void Controller::start(){
    for(int i = 0; i < 10; i++){
        std::cout << "This is the - " << i + 1 << " time in the loop." << std::endl;
    }
    fillArray();
}

void Controller::fillArray(){
    for(int i = 0; i < 10; i++){
        arrayOfChars[i] = 'a';
    }
    printArray();
}
void Controller::printArray(){
    for(int i = 0; i < 10; i++){
        std::cout << arrayOfChars[i] << std::endl;
    }
}
