//
//  LinkedListTester.cpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 2/14/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "LinkedListTester.hpp"
#include <random>

void LinkedListTester::testListBasics(){
    LinkedList<int> numbers;
    numbers.add(9);
    std::cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << std::endl;
    std::cout << numbers.getEnd()->getData() << " is at the end of the list and should be 9" << std::endl;
    
    numbers.add(0);
    std::cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << std::endl;
    std::cout << numbers.getEnd()->getData() << " is at the end of the list and should be 0" << std::endl;
    
    numbers.addAtIndex(1, 2);
    
    numbers.add(324);
    
    std::cout << numbers.getFront()->getData() << " is at the front of the list and should be 9" << std::endl;
    std::cout << numbers.getEnd()->getData() << " is at the end of the list and should be 324" << std::endl;
    
    std::cout << "This loop should print 4 lines" << std::endl;
    for(int index = 0; index < numbers.getSize(); index++){
        std::cout << numbers.getFromIndex(index) << std::endl;
        
    }
    
    numbers.remove(0);
    numbers.add(32567);
    numbers.addAtIndex(0, 2312);
    
    std::cout << numbers.getFront()->getData() << " is at the front of the list and should be 2312" << std::endl;
    std::cout << numbers.getEnd()->getData() << " is at the end of the list and should be 32567" << std::endl;
    
}

void LinkedListTester::testListWithData(){
    srand(NULL);
    Timer listTimer;
    
    listTimer.startTimer();
    LinkedList<CrimeData> crimes = FileController::readDataToList("/Users/dvaw7563/Documents/C++/Sample_Project/Sample_Project/Data/crime.csv");
    
    listTimer.stopTimer();
    std::cout << "This is how long it took to read the structure into our custom data structure" << std::endl;
    
    listTimer.displayInformation();
    
    
    listTimer.resetTimer();
    
    std::cout << "Here is how long it takes to access a random value" << std::endl;
    listTimer.startTimer();
    
    
    int randomLocation = (rand() * rand()) % crimes.getSize();
    std::cout << "The random index is " << randomLocation << std::endl;
    double totalViolentRate = crimes.getFromIndex(randomLocation).getAllViolentRates();
    listTimer.stopTimer();
    std::cout << "The random crime stat is: " << totalViolentRate << ", and here is the time" << std::endl;
    listTimer.displayInformation();
    
}
