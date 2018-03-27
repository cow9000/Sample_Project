//
//  BinaryTreeNode.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/27/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp

template <class Type>
class BinaryTreeNode : public Node<Type>{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * left;
    BinaryTreeNode<Type> * right;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type>* getRootNode();
    BinaryTreeNode<Type>* getLeftNode();
    BinaryTreeNode<Type>* getRightNode();
    
    void setRootNode(BinaryTreeNode<Type>* node);
    void setLeftNode(BinaryTreeNode<Type>* node);
    void setRightNode(BinaryTreeNode<Type>* node);
};

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>(){
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data){
    root = nullptr;
    left = nullptr;
    right = nullptr;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type>::getRootNode(){
    return this->root;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type>::getLeftNode(){
    return this->left;
}

template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type>::getRightNode(){
    return this->right;
}

#endif /* BinaryTreeNode_hpp */
