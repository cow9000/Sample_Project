//
//  GraphTester.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/23/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "../Model/Structures/NonLinear/Graph.h"

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversals();
public:
    void testGraphs();
};

#endif /* GraphTester_hpp */
