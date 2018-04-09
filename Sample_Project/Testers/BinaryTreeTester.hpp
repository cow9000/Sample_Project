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
#include <string>

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
    BinarySearchTree<std::string> testTreeString;
public:
    BinaryTreeTester();
    void doTreeStuff();
    
};

#endif /* BinaryTreeTester_hpp */
