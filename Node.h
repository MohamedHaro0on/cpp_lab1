#ifndef NODE_H
#define NODE_H

#include <iostream>
using std::cout;
using std::endl;


template<class T>
class Node {
    public : 
        T data ;
        Node<T>* prev ;
        Node<T>* next ;
    
        Node() = delete ;
        Node(T&); 
        Node (const Node&);
        ~Node();

        // setters : 
        void setData(T&);
        
        // getters : 
        T getData() const;

};


#endif 