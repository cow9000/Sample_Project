#ifndef NODE_HPP
#define NODE_HPP

template <class Type>
class Node{
  public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
    
  protected:
    Type data;
};

template <class Type>
Node<Type> :: Node(){

}

template <class Type>
Node<Type> :: Node(Type data){
  this->data = data;
}

template <class Type>
Node<Type>:: setData(Type data){
  this->data = data;
}

template <class Type>
Type Node<type> :: getData(){
  return data;
}

#endif /* NODE_HPP */
