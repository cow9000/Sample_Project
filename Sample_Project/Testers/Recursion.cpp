//
//  Recursion.cpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/5/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#include "Recursion.hpp"

int RecursionTester::fib(int number){
    
    if(number == 0 || number == 1){
        std::cout << "Reached a base case" << std::endl;
        return 1;
    }
    else{
        std::cout << "Reached a recursive case with: " << number - 1 << " and " << number - 2 << std::endl;
        return fib(number-1) * number;
    }
    
}

string RecursionTester::mystery(string word){
    if(word.length() == 1){
        return word;
    }
    else{
        return word + mystery(word.substr(0,word.length()-1));
    }
}

string RecursionTester::scramble(string word){
    string scrambledWord = "";
    string tempString = "";
    char newString[word.length()];
    
    for(int i = 0; i < word.length(); i++){
        newString[i] = word.at(i);
    }
    
    
    for(int i = 0; i < word.length(); i++){
        int randomNum = rand()%word.length();
        
        stringstream ss;
        ss << newString[randomNum];
        ss >> scrambledWord;
        
    }
    
    
    
    return scrambledWord;
}

string RecursionTester::stringMesserarounder(string word){
    
    
    
    word += scramble(word);
    if(word.length() >= 100){
        return word;
    }else{
        return (word + stringMesserarounder(word));
    }
}

void RecursionTester::testRecursionNumbers(){
    Timer recursionTimer;
    std::cout << "Testing fibonacci with 10" << std::endl;
    recursionTimer.startTimer();
    std::cout << fib(10) << std::endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
    
}

void RecursionTester::testRecursionString(){
    std::cout << mystery("X") << std::endl;
    std::cout << mystery("car") << std::endl;
    std::cout << mystery("apple") << std::endl;
    std::cout << stringMesserarounder("Apple") << std::endl;
}

