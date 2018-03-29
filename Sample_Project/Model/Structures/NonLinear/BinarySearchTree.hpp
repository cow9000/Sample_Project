//
//  BinarySearchTree.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/29/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.hpp"
#include <iostream>
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>{
protected:
    int calculateSize(BinaryTreeNode<Type> * startNode);
    int calculateHeight(BinaryTreeNode<Type> * startNode);
    bool isBalanced(BinaryTreeNode<Type> * startNode);
    bool isComplete(BinaryTreeNode<Type> * startNode, int index, int size);
    void inOrderTraversal(BinaryTreeNode<Type> * inStart);
    void preOrderTraversal(BinaryTreeNode<Type> * preStart);
    void postOrderTraversal(BinaryTreeNode<Type> * postStart);
    
    BinaryTreeNode<Type> * getRightMostChild(BinaryTreeNode<Type> * current);
    BinaryTreeNode<Type> * getLeftMostChild(BinaryTreeNode<Type> * current);
    
    void removeNode(BinaryTreeNode<Type> * removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinaryTreeNode<Type> * getRoot();
    void setRoot(BinaryTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    void demoTraversalSteps(BinaryTreeNode<Type> * node);
    
    int getSize();
    int getHeight();
    bool isComplete();
    bool isBalanced();
    
    bool contains(Type value);
    void insert(Type itemToInsert);
    void remove(Type value);
    
    Type findMinimum();
    Type findMaximum();
};

template <class Type>
int BinarySearchTree<Type>::calculateSize(BinaryTreeNode<Type> * startNode){
    return 0;
}

template <class Type>
int BinarySearchTree<Type>::calculateHeight(BinaryTreeNode<Type> * startNode){
    return 0;
}

template <class Type>
bool BinarySearchTree<Type>::isBalanced(BinaryTreeNode<Type> * startNode){
    return true;
}

template <class Type>
bool BinarySearchTree<Type>::isComplete(BinaryTreeNode<Type> * startNode, int index, int size){
    return true;
}
template <class Type>
void BinarySearchTree<Type>::inOrderTraversal(BinaryTreeNode<Type> * inStart){
    if(inStart != nullptr){
        inOrderTraversal(inStart->getLeftNode());
        cout << inStart->getData() << endl;
        inOrderTraversal(inStart->getRightNode());
    }
}

template <class Type>
void BinarySearchTree<Type>::preOrderTraversal(BinaryTreeNode<Type> * preStart){
    
}

template <class Type>
void BinarySearchTree<Type>::postOrderTraversal(BinaryTreeNode<Type> * postStart){
    
}

template <class Type>
  BinaryTreeNode<Type> * BinarySearchTree<Type>::getRightMostChild(BinaryTreeNode<Type> * current){
    
}
template <class Type>
  BinaryTreeNode<Type> * BinarySearchTree<Type>::getLeftMostChild(BinaryTreeNode<Type> * current){
    
}

template <class Type>
void BinarySearchTree<Type>::removeNode(BinaryTreeNode<Type> * removeMe){
    
}

template <class Type>
BinarySearchTree<Type>::BinarySearchTree(){
    
}

template <class Type>
BinarySearchTree<Type>::~BinarySearchTree(){
    
}

template <class Type>
BinaryTreeNode<Type> * BinarySearchTree<Type>::getRoot(){
    
}

template <class Type>
void BinarySearchTree<Type>::setRoot(BinaryTreeNode<Type> * root){
    
}

template <class Type>
void BinarySearchTree<Type>::inOrderTraversal(){
    inOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type>::preOrderTraversal(){
    preOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type>::postOrderTraversal(){
    postOrderTraversal(this->root);
}

template <class Type>
void BinarySearchTree<Type>::demoTraversalSteps(BinaryTreeNode<Type> * start){
    if(start != nullptr){
        std::cout << "check if left is here" << std::endl;
        demoTraversalSteps(start->getLeftNode());
        std::cout << "Return to root" << std::endl;
        std::cout << "check if right is here" << std::endl;
        demoTraversalSteps(start->getRightNode());
    }else{
        std::cout << "Reached nullptr - if on right it's back up the recursive call stack" << std::endl;
    }
}

template <class Type>
int BinarySearchTree<Type>::getSize(){
    
}

template <class Type>
int BinarySearchTree<Type>::getHeight(){
    
}

template <class Type>
bool BinarySearchTree<Type>::isComplete(){
    
}

template <class Type>
bool BinarySearchTree<Type>::isBalanced(){
    
}

template <class Type>
bool BinarySearchTree<Type>::contains(Type value){
    
}

template <class Type>
void BinarySearchTree<Type>::insert(Type itemToInsert){
    BinaryTreeNode<Type> * insertMe = new BinaryTreeNode<Type>(itemToInsert);
    BinaryTreeNode<Type> * previous = nullptr;
    BinaryTreeNode<Type> * current = this->root;
    
    if(current == nullptr){
        this->root = insertMe;
    }else{
        while(current != nullptr){
            previous = current;
            if(itemToInsert < current->getData()){
                current = current->getLeftNode();
            }else if(itemToInsert > current->getData()){
                current = current->getRightNode();
            }else{
                cerr << "Item exists already - exiting insert" << endl;
                delete insertMe;
                return;
            }
        }
        
        if(previous->getData() > itemToInsert){
            previous->setLeftNode(insertMe);
        }else{
            previous->setRightNode(insertMe);
        }
        insertMe->setRootNode(previous);
        
    }
    
}

template <class Type>
void BinarySearchTree<Type>::remove(Type value){
    
}

template <class Type>
Type BinarySearchTree<Type>::findMinimum(){
    
}

template <class Type>
Type BinarySearchTree<Type>::findMaximum(){
    
}




#endif /* BinarySearchTree_h */
