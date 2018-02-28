//
//  TestingStacksAndQueues.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 2/28/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include <iostream>
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/Headers/FileController.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/List.hpp"
using namespace std;

class TestingStacksAndQueues{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
};

#endif /* TestingStacksAndQueues_hpp */
