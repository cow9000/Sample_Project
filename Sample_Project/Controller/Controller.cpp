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
    
    LinkedListTester a;
    a.testListBasics();
    a.testListWithData();
    
    //ArrayTester a;
    //a.testArrayUse();
    
    //findMaxAndMin();
    
}

void Controller::findMaxAndMin(){
    Timer searchTimer;
    searchTimer.startTimer();
    std::vector<CrimeData> myData = FileController::readCrimeDataToVector("/Users/dvaw7563/Documents/C++/Sample_Project/Sample_Project/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for(int index = 1; index < myData.size(); index++){
        if(myData[minIndex] > myData[index]){
            minIndex = index;
        }
        
        else if(myData[maxIndex] < myData[index]){
            maxIndex = index;
        }
        
    }
    
    searchTimer.stopTimer();
    std::cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << std::endl;
    std::cout << "The largest Crime stat is at " << maxIndex << " and it is: " << maxIndex << std::endl;
    searchTimer.displayInformation();
    
    
    for(int i = 200; i < 216; i++){
        std::cout << myData[i] << std::endl;
    }
    
    
    Array<CrimeData> data(myData.size());
    for(int i = 0; i < myData.size(); i++){
        data[i] = myData[i];
    }
    
    Timer vectorTimer;
    Timer arrayTimer;
    
    vectorTimer.startTimer();
    std::cout << myData[424] << std::endl;
    vectorTimer.stopTimer();
    vectorTimer.displayInformation();
    
    arrayTimer.startTimer();
    std::cout << data[424] << std::endl;
    arrayTimer.stopTimer();
    arrayTimer.displayInformation();
    
    
}

void Controller::testArray(){
    
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

