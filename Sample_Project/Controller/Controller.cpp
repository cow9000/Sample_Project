//
//  Controller.cpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 1/25/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Headers/Controller.hpp"

Controller::Controller(){
    arrayOfInts = new int[10];
    arrayOfStrings = new std::string[10];
    arrayOfDoubles = new double[10];
}

void Controller::start(){
    for(int i = 0; i < 10; i++){
        std::cout << "This is the - " << i + 1 << " time in the loop." << std::endl;
    }
    fillArray();
    
    
}

void Controller::fillArray(){
    for(int i = 0; i < 10; i++){
        arrayOfInts[i] = i;
        arrayOfDoubles[i] = 2.483*i;
        arrayOfStrings[i] = "AWDIAHWDOAWHDIO";
    }
    printArray();
}
void Controller::printArray(){
    for(int i = 0; i < 10; i++){
        std::cout << arrayOfInts[i] << std::endl;
        std::cout << arrayOfDoubles[i] << std::endl;
        std::cout << arrayOfStrings[i] << std::endl;
    }
}
