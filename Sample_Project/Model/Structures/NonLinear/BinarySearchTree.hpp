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
    
}

template <class Type>
int BinarySearchTree<Type>::calculateHeight(BinaryTreeNode<Type> * startNode){
    
}

template <class Type>
bool BinarySearchTree<Type>::isBalanced(BinarySearchTree<Type> * startNode){
    
}

template <class Type>
bool BinarySearchTree<Type>::isComplete(BinarySearchTree<Type> * startNode, int index, int size){
    
}
template <class Type>
void BinarySearchTree<Type>::inOrderTraversal(BinarySearchTree<Type> * inStart){
    
}

template <class Type>
void preOrderTraversal(BinarySearchTree<Type> * preStart){
    
}

template <class Type>
void postOrderTraversal(BinarySearchTree<Type> postStart){
    
}

template <class Type>
BinarySearchTree<Type> * BinarySearchTree<Type>::getRightMostChild(BinarySearchTree<Type> * current){
    
}
template <class Type>
BinarySearchTree<Type> * BinarySearchTree<Type>::getLeftMostChild(BinarySearchTree<Type> * current){
    
}

template <class Type>
void BinarySearchTree<Type>::removeNode(BinarySearchTree<Type> * removeMe){
    
}

template <class Type>
BinarySearchTree<Type>::BinarySearchTree(){
    
}

template <class Type>
BinarySearchTree<Type>::~BinarySearchTree(){
    
}

template <class Type>
BinarySearchTree<Type> * BinarySearchTree<Type>::getRoot(){
    
}

template <class Type>
void BinarySearchTree<Type>::setRoot(BinarySearchTree<Type> * root){
    
}

template <class Type>
void BinarySearchTree<Type>::inOrderTraversal(){
    
}

template <class Type>
void BinarySearchTree<Type>::preOrderTraversal(){
    
}

template <class Type>
void BinarySearchTree<Type>::postOrderTraversal(){
    
}

template <class Type>
void BinarySearchTree<Type>::demoTraversalSteps(BinarySearchTree<Type> * node){
    
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
