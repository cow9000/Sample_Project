//
//  Recursion.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/5/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Recursion_hpp
#define Recursion_hpp

#include <iostream>
#include <string>
#include "../Controller/Tools/Timer.hpp"

using namespace std;

class RecursionTester{
private:
    int fib(int start);
    string mystery(string word);
public:
    void testRecursionNumbers();
    void testRecursionString();
};


#endif /* Recursion_hpp */
