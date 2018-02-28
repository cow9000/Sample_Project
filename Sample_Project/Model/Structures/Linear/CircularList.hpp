//
//  CircularList.hpp
//  Sample_Project
//
//  Created by Vawdrey, Derek on 2/28/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include "List.hpp"
#include "../../Nodes/DoubleNode.hpp"

template <class Type>
class CircularList : public List<Type>{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    
    DoubleNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
};


#endif /* CircularList_hpp */
