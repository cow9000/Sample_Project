//
//  BinaryTreeTester.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/27/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
    
};

#endif /* BinaryTreeTester_hpp */
