//
//  N_AryTreeNode.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 4/23/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef N_AryTreeNode_hpp
#define N_AryTreeNode_hpp

#include <vector>
#include "Node.hpp"

template <class Type>
class N_AryTreeNode : public Node<Type>{
private:
    vector<N_AryTreeNode<Type>*> nodes;
    N_AryTreeNode<Type> * root;
public:
    N_AryTreeNode<Type>();
    ~N_AryTreeNode<Type>();
    N_AryTreeNode<Type>(Type data);
    
    vector<N_AryTreeNode<Type>*> getNodes();
    N_AryTreeNode<Type> * getRoot();
    
    int getChildCount;
    
    void setRoot(N_AryTreeNode<Type> * root);
    void addChild(Type data);
};

template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode(){
    
}

template <class Type>
N_AryTreeNode<Type> :: N_AryTreeNode(Type data) : Node<Type>(data){
    
}

template <class Type>
N_AryTreeNode<Type> :: ~N_AryTreeNode()
{
    for(int index = nodes.size() -1; index >= 0 ; index--){
        delete nodes[index];
    }
}

template <class Type>
N_AryTreeNode<Type> * N_AryTreeNode<Type> :: getRoot(){
    return root;
}

template <class Type>
vector<N_AryTreeNode<Type>*> N_AryTreeNode<Type>::getNodes(){
    return nodes;
}

template <class Type>
int N_AryTreeNode<Type>::getChildCount(){
    return nodes;
}

template <class Type>
void N_AryTreeNode<Type>::setRoot(N_AryTreeNode<Type>*root){
    this->root = root;
}

template <class Type>
void N_AryTreeNode<Type>::addChild(Type data){
    N_AryTreeNode<Type>* node = new N_AryTreeNode<Type>(data);
    nodes.push_back(node);
}



#endif /* N_AryTreeNode_hpp */
