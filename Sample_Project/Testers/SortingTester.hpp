//
//  SortingTester.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/15/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <iostream>
#include "../Controller/Headers/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"

class SortingTester{
private:
    int swapCount;
    void quickSort(vector<CrimeData> & data, int low, int high);
    int partition(vector<CrimeData> & data, int low, int high);
    void swap(vector<CrimeData> & data, int small, int large);
public:
    void testSorts();
};

#endif /* SortingTester_hpp */
