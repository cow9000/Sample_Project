//
//  SortingTester.cpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/15/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "SortingTester.hpp"


void SortingTester::quickSort(vector<CrimeData> & data, int low, int high){
    if(low < high){
        int partitionPoint = partition(data, low, high);
        quickSort(data, low, partitionPoint-1);
        quickSort(data, partitionPoint+1, high);
        
    }
}

int SortingTester::partition(vector<CrimeData> &info, int low, int high){
    CrimeData pivotValue = info[high];
    int smallest = low-1;
    for(int index = low; index < high-1; index++){
        if(info[index] < pivotValue){
            smallest++;
            swap(info, smallest, index);
        }
    }
    swap(info, smallest + 1, high);
    
    return smallest + 1;
}

void SortingTester::swap(vector<CrimeData> &info, int small, int large){
    CrimeData temp = info[small];
    info[small] = info[large];
    info[large] = temp;
    swapCount++;
}

void SortingTester:: testSorts(){
    Timer sortTimer;
    swapCount = 0;
    vector<CrimeData> data = FileController::readCrimeDataToVector("/Users/dvaw7563/Documents/C++/Sample_Project/Sample_Project/Data/crime.csv");
    vector<CrimeData> smaller;
    for(int i = 0; i < 10000; i++){
        smaller.push_back(data[i]);
    }
    sortTimer.startTimer();
    quickSort(smaller, 0, smaller.size());
    sortTimer.stopTimer();
    sortTimer.displayInformation();
    std::cout << "The number of swaps were: " <<  swapCount << std::endl;
}


