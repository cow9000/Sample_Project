//
//  TestingStacksAndQueues.cpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 2/28/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "TestingStacksAndQueues.hpp"

void TestingStacksAndQueues::stackVersusList(){
    Stack<int> numberStack;
    LinkedList<int> numberList;
    Timer stackTimer, listTimer;
    for(int index = 0; index < 10; index++){
        numberStack.add(index);
        numberList.add(index);
    }
    
    std::cout << "Get the third from the last item from the structure" << std::endl;
    
    int value = -99;
    int index = 0;
    stackTimer.startTimer();
    while(index < 7){
        std::cout << numberStack.pop() << std::endl;
        index ++;
    }
    stackTimer.stopTimer();
    index = 0;
    listTimer.startTimer();
    value = numberList.getFromIndex(7);
    listTimer.stopTimer();
    
    std::cout << "the time it took to work with Stack" << std::endl;
    stackTimer.displayInformation();
    std::cout << "the time it took to work with List" << std::endl;
    listTimer.displayInformation();
    
    LinkedList<int> * listVersion = &numberStack;
    int stackSize = listVersion->getSize();
    std::cout << "stack size is: " << stackSize << std::endl;
    for(int index = 0; index < stackSize; index++){
        std::cout << numberStack.pop() << std::endl;
    }
    
    std::cout << "What is left in the list" << std::endl;
    int listSize = numberList.getSize();
    std::cout << "List size is: " << listSize << std::endl;
    
    for(int index = 0; index < listSize; index++){
        std::cout << numberList.getFromIndex(index) << "\t";
    }
    
}

void TestingStacksAndQueues::stackVersusQueue(){
    vector<CrimeData> data = FileController::readCrimeDataToVector("/Users/dvaw7563/Documents/C++/Sample_Project/Sample_Project/Data/crime.csv");
    Stack<CrimeData> crimeStack;
    Queue<CrimeData> crimeQueue;
    
    for(int index = 0; index < 100; index++){
        CrimeData temp = data.at(index);
        crimeStack.push(temp);
        crimeQueue.enqueue(temp);
    }
    
    Queue<int> queue;
    Stack<int> stack;
    Queue<int> queueFromStack;
    Stack<int> stackFromQueue;
    
    for(int index = 0; index < 10; index++){
        queue.enqueue(index);
        stack.push(index);
    }
    
    for(int index = 0; index < 10; index++){
        std::cout << index << std::endl;
        std::cout << "Queue result: " << queue.dequeue() << std::endl;
        std::cout << "Stack result: " << stack.pop() << std::endl;
    }
    
    
    
    for(int index = 0; index < 10; index++){
        queue.enqueue(index);
        stack.push(index);
    }
    
    for(int index = 0; index < 10; index++){
        stackFromQueue.push(queue.dequeue());
        queueFromStack.enqueue(stack.pop());
    }
    
    for(int index = 0; index < 10; index++){
        std::cout << index << std::endl;
        std::cout << "Stack result: " << stackFromQueue.pop() << std::endl;
        std::cout << "Queue result: " << queueFromStack.dequeue() << std::endl;
    }
    
}

void TestingStacksAndQueues::queueVersusList(){
    Queue<string> wordQueue;
    LinkedList<string> wordList;
    
    wordQueue.add("first");
    wordQueue.add("second");
    wordQueue.add("third");
    wordQueue.add("fourth");
    wordQueue.add("fifth");
    
    wordList.add("first");
    wordList.add("second");
    wordList.add("third");
    wordList.add("fourth");
    wordList.add("fifth");

    std::cout << "Queue: " << wordQueue.getFromIndex(0) << " versus List: " << wordList.getFromIndex(0) << std::endl;
    std::cout << "Here is the order removal in a queue: " << std::endl;
    wordQueue.clear();
    std::cout << "Here is a backwards order removal in a list: " << std::endl;
    for(int index = wordList.getSize() - 1; index >= 0; index--){
        std::cout << wordList.remove(index) << std::endl;
    }
    
}
