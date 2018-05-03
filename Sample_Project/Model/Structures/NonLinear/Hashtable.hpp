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
    long handleCollision(long index);
    
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
    long insertPosition = insert->getKey() % this->capacity;
    return insertPosition;
}

template <class Type>
long Hashtable<Type> :: handleCollision(long currentPosition){
    long shift = 17;
    for(long position = currentPosition + shift; position!=currentPosition; position+=shift){
        if(position>= capacity){
            position = position%capacity;
        }
        
        if(internalStorage[position] == nullptr){
            return position;
        }
    }
    return -1;
}

template <class Type>
long Hashtable<Type>::getSize(){
    return this->size;
}

template <class Type>
long Hashtable<Type>::getNextPrime(){
    return -1;
}

template <class Type>
void Hashtable<Type> ::resize(){
    long updatedCapacity = getNextPrime();
    HashNode<Type> * * tempStorage = new HashNode<Type> * [updatedCapacity];
    std::fill_n(tempStorage, updatedCapacity, nullptr);
    
    long oldCapacity = this->capacity;
    this->capacity = updatedCapacity;
    
    for(long index = 0; index < oldCapacity; index++){
        if(internalStorage[index] != nullptr){
            HashNode<Type>* temp = internalStorage[index];
            long position = findPosition(temp);
            
            if(tempStorage[position] == nullptr){
                tempStorage[position] = temp;
            }else{
                long updatedPosition = handleCollision(position);
                if(updatedPosition != -1){
                    tempStorage[updatedPosition] = temp;
                }
            }
        }
    }
    internalStorage = tempStorage;
}

template <class Type>
void Hashtable<Type>::insert(Type value){
    this->size++;
    if(((this->size * 1.000)/this->capacity) > this->loadFactor){
        resize();
    }
    HashNode<Type> * temp = new HashNode<Type>(value);
    long index = findPosition(temp);
    if(internalStorage[index] == nullptr){
        internalStorage[index] = templ
    }else{
        long updatedPosition = handleCollision(index);
        if(updatedPosition != -1){
            internal[updatedPosition] = temp;
        }
    }
}


#endif /* Hashtable_h */
