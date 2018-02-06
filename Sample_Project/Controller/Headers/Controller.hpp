//
//  Controller.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 1/25/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <string>
#include "../Tools/Timer.hpp"
#include "FileController.hpp"
#include "../../Model/Structures/Array.hpp"
#include "../../Testers/ArrayTester.hpp"

class Controller{
public:
    Controller();
    void start();
private:
    void fillArray();
    void printArray();
    void findMaxAndMin();
    void testArray();
    
    
    int *arrayOfInts;
    std::string *arrayOfStrings;
    double *arrayOfDoubles;
};

#endif /* Controller_hpp */
