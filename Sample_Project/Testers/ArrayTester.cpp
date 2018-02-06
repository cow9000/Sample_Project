//
//  ArrayTester.cpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 2/6/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "ArrayTester.hpp"

void ArrayTester:: testArrayUse(){
    Array<int> firstArray(10);
    for(int index = 0; index < 10; index++){
        firstArray.setAtIndex(index, index);
    }
    
    for(int index = 0; index < firstArray.getSize(); index++){
        std::cout << firstArray[index] << std::endl;
    }
    
    Array<int> secondArray(400);
    
    std::cout << secondArray.getSize() << std::endl;
    std::cout << firstArray.getSize() << std::endl;
    
    Array<int> thirdArray(secondArray);
    
    std::cout << thirdArray.getSize() << std::endl;
    firstArray = thirdArray;
    std::cout << firstArray[4] << std::endl;
    
    thirdArray[5] = 123;
    std::cout << thirdArray[5] << std::endl;
    
}
