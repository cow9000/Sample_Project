//
//  Graph.h
//  Sample_Project
//
//  Created by Vawdrey, Derek on 3/19/18.
//  Copyright © 2018 Vawdrey, Derek. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>

using namespace std;
template <class Type>
class Graph{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MINIMUM];
    int weightCostMatrix [MAXIMUM][MINIMUM];
    Type GraphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    //Graph operations
    void addVertex(const Type& value);
    //Connect Vertices
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target, int cost);
    
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    //Accessors
    Type& operator [] (int vertex);
    Type operator[] (int vertex) const;
    int size() const;
    
    //Check connections
    bool hasUndirectedConnection(int source, int target) const;
    bool areConnected(int source int target) const;
    std::set<int> neighbors(int vertex) const;
    
    //Traversals
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> &graph, int vertex);
};

template <class Type>
const int Graph<Type> :: MAXIMUM;

template <class Type>
Graph <Type>::Graph(){
    this->vertexCount = 0;
}

template <class Type>
int Graph<Type> :: size() const{
    return vertexCount;
}
//Left hand side operator gives reference
template <class Type>
Type& graph<Type> :: operator[](int vertex){
    assert(vertex < vertexCount);
    return graphData[vertex];
}

//Right hand side operator gives copy
template <class Type>
Type graph<Type> :: operator[](int vertex) const{
    assert(vertex < vertexCount);
    return graphData[vertex];
}



#endif /* Graph_hpp */
