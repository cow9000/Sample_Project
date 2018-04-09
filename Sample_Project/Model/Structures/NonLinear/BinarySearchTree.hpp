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
    void destroyTree(BinaryTreeNode<Type> * node);
    
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
    if(startNode != nullptr){
        return calculateSize(startNode->getLeftNode()) + calculateSize(startNode->getRightNode()) + 1;
    }
    return 0;
}

template <class Type>
int BinarySearchTree<Type>::calculateHeight(BinaryTreeNode<Type> * startNode){
    if(startNode != nullptr){
        return max(calculateHeight(startNode->getLeftNode()), calculateHeight(startNode->getRightNode())) + 1;
    }
    return 0;
}

template <class Type>
bool BinarySearchTree<Type>::isBalanced(BinaryTreeNode<Type> * current){
    int leftHeight = 0;
    int rightHeight = 0;
    if(current == nullptr){
        return true;
    }
    leftHeight = calculateHeight(current->getLeftNode());
    rightHeight = calculateHeight(current->getRightNode());
    
    int heightDifference = abs(leftHeight - rightHeight);
    bool leftBalanced = isBalanced(current->getLeftNode());
    bool rightBalanced = isBalanced(current->getRightNode());
    
    if(heightDifference <= 1 && leftBalanced && rightBalanced){
        return true;
    }
    return false;
}

template <class Type>
bool BinarySearchTree<Type>::isComplete(BinaryTreeNode<Type> * startNode, int index, int size){
    if(startNode == nullptr){
        return true;
    }
    
    if(index >= size){
        return false;
    }
    
    return (isComplete(startNode->getLeftNode(), 2*index+1,size) && isComplete(startNode->getRightNode(), 2*index+2, size));
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
    if(preStart != nullptr){
        cout << preStart->getData() << endl;
        preOrderTraversal(preStart->getLeftNode());
        preOrderTraversal(preStart->getRightNode());
    }
}

template <class Type>
void BinarySearchTree<Type>::postOrderTraversal(BinaryTreeNode<Type> * postStart){
    if(postStart != nullptr){
        postOrderTraversal(postStart->getLeftNode());
        postOrderTraversal(postStart->getRightNode());
        cout << postStart->getData() << endl;
    }
}

template <class Type>
  BinaryTreeNode<Type> * BinarySearchTree<Type>::getRightMostChild(BinaryTreeNode<Type> * current){
      BinaryTreeNode<Type> * currentNode = current;
      while(currentNode != nullptr){
          currentNode = currentNode->getRightNode();
      }
      return currentNode;
}
template <class Type>
  BinaryTreeNode<Type> * BinarySearchTree<Type>::getLeftMostChild(BinaryTreeNode<Type> * current){
      BinaryTreeNode<Type> * currentNode = current;
      while(currentNode != nullptr){
          currentNode = currentNode->getLeftNode();
      }
      return currentNode;
      
}

template <class Type>
void BinarySearchTree<Type>::removeNode(BinaryTreeNode<Type> * removeMe){
    BinaryTreeNode<Type> * current;
    BinaryTreeNode<Type> * previous;
    BinaryTreeNode<Type> * temp;
    
    previous = removeMe->getRootNode();
    
    if(removeMe->getRightNode() == nullptr && removeMe->getLeftNode() == nullptr){
        temp = removeMe;
        removeMe = nullptr;
        
        if(previous != nullptr && removeMe->getData() < previous->getData()){
            previous ->setLeftNode(removeMe);
        }else if(previous != nullptr && removeMe->getData() > previous->getData()){
            previous->setRightNode(removeMe);
        }
        delete temp;
    }else if(removeMe->getRightNode() == nullptr){
        temp = removeMe;
        removeMe = removeMe->getLeftNode();
        
        if(previous != nullptr && temp->getData() < previous->getData()){
            previous->setLeftNode(removeMe);
        }else if(previous != nullptr && temp->getData() > previous->getData()){
            previous->setRightNode(removeMe);
        }
        removeMe->setRootNode(previous);
        delete temp;
    }else if(removeMe->getLeftNode() == nullptr){
        temp = removeMe;
        removeMe = removeMe->getRightNode();
        if(previous != nullptr && removeMe->getData() < previous->getData()){
            previous->setLeftNode(removeMe);
        }else if(previous != nullptr && removeMe->getData() > previous->getData()){
            previous->setRightNode(removeMe);
        }
        removeMe->setRootNode(previous);
        delete temp;
    }else{
        current = getRightMostChild(removeMe->getLeftNode());
        previous = current->getRootNode();
        removeMe->setData(current->getData());
        
        if(previous == nullptr){
            removeMe->setLeftNode(current->getLeftNode());
        }else{
            previous->setRightNode(current->getLeftNode());
        }
        
        if(current->getLeftNode() != nullptr){
            current->getLeftNode()->setRootNode(removeMe);
        }
        delete current;
    }
    
    if(removeMe == nullptr || removeMe->getRootNode() == nullptr){
        this->root = removeMe;
    }
    
}

template <class Type>
BinarySearchTree<Type>::BinarySearchTree(){
    
}

template <class Type>
BinarySearchTree<Type>::~BinarySearchTree(){
    destroyTree(this->root);
}

template <class Type>
void BinarySearchTree<Type>::destroyTree(BinaryTreeNode<Type> * node){
    if(node != nullptr){
        destroyTree(node->getLeftNode());
        destroyTree(node->getRightNode());
        delete node;
    }
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
    int size = 0;
    size += calculateSize(this->root);
    return size;
}

template <class Type>
int BinarySearchTree<Type>::getHeight(){
    return calculateHeight(this->root);
}

template <class Type>
bool BinarySearchTree<Type>::isComplete(){
    int index = 0;
    int size = getSize();
    return isComplete(this->root, index, size);
}

template <class Type>
bool BinarySearchTree<Type>::isBalanced(){
    return isBalanced(this->root);
}

template <class Type>
bool BinarySearchTree<Type>::contains(Type itemToFind){
    BinaryTreeNode<Type> * current = this->root;
    if(current == nullptr){
        return false;
    }else{
        while(current != nullptr){
            if(itemToFind == current->getData()){
                return true;
            }else if(itemToFind < current->getData()){
                current = current->getLeftNode();
            }else{
                current = current->getRightNode();
            }
        }
        return false;
    }
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
    if(this->root == nullptr){
        std::cout << "Empty tree so removal is not possible" << std::endl;
    }else{
        BinaryTreeNode<Type> * current = this->root;
        BinaryTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        while(current != nullptr && !hasBeenFound){
            if(current->getData() == value){
                hasBeenFound = true;
            }else{
                previous = current;
                if(value < current->getData()){
                    current = current->getLeftNode();
                }else{
                    current = current->getRightNode();
                }
            }
            
        }
        if(current == nullptr){
            cerr << "Item not found, removal unsuccessful" << endl;
            
        }else if(hasBeenFound){
            if(current == this->root){
                removeNode(this->root);
            }else if(value < previous->getData()){
                removeNode(previous->getLeftNode());
            }else{
                removeNode(previous->getRightNode());
            }
        }
    }
}

template <class Type>
Type BinarySearchTree<Type>::findMinimum(){
    assert(this->root != nullptr);
    return getLeftMostChild(this->root)->getData();
}

template <class Type>
Type BinarySearchTree<Type>::findMaximum(){
    assert(this->root != nullptr);
    return getRightMostChild(this->root)->getData();
}




#endif /* BinarySearchTree_h */
