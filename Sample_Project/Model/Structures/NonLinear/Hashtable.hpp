//
//  Hashtable.h
//  Sample_Project
//
//  Created by Vawdrey, Derek on 4/27/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Hashtable_h
#define Hashtable_h

#include "../../Nodes/HashNode.hpp"

template <class Type>
class Hashtable{
private:
    HashNode<Type> ** internalStorage;
    long size;
    long capacity;
    double loadFactor;
    
    long getNextPrime();
    bool isPrime(long current);
    void resize();
    long findPosition(HashNode<Type>* insertedNode);
    long handleCollision(HashNode<Type> * insertedNode, long index);
    
public:
    Hashtable();
    ~Hashtable();
    
    void insert(Type data);
    long getSize();
};

template <class Type>
Hashtable<Type> :: Hashtable(){
    capacity = 101;
    internalStorage = new HashNode<Type>*[capacity];
    size = 0;
    loadFactor = .80;
}

template <class Type>
Hashtable<Type> :: ~Hashtable(){
    delete [] internalStorage;
}

template <class Type>
bool Hashtable<Type>::isPrime(long current){
    return false;
}

template <class Type>
long HashTable<Type> :: findPosition(HashNode<Type> * insert){
    return -1;
}

template <class Type>
long Hashtable<Type> :: handleCollision(Hashnode<Type> * current, long index){
    return -1;
}

template <class Type>
long Hashtable<Type>::getSize(){
    return -1;
}

template <class Type>
long Hashtable<Type>::getNextPrime(){
    return -1;
}

template <class Type>
void Hashtable<Type> ::resize(){
    
}

template <class Type>
void Hashtable<Type>::insert(Type value){
    
}


#endif /* Hashtable_h */
