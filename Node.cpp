#ifndef NODE_CPP
#define NODE_CPP 

#include "Node.h"

template<class T>
Node<T>::Node(T& item){
    this->data = item ;
}


template<class T>
Node<T>::Node (const Node<T>& other){
    this->data = other.data ;
}


template<class T>
Node<T>::~Node(){
    cout << "Destructor" << endl;
}

// setters : 

template<class T>
void Node<T>::setData(T& item){
    this->data = item ;
}

// getters : 

template<class T>
T Node<T>::getData() const{
    return this->data ;
}

// this is the most important  line : 
// without this line it will cause linker errors and other problems ;
template class Node<int>;
template class Node<char>;
#endif