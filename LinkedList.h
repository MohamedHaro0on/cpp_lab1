#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include "Node.h"

template <class T>
class LinkedList{
    // utility functions : 
    private : 
    Node<T>* getNode (T data);
    public:
        Node<T>* tail ;
        Node<T>* head;
        int count ;
        LinkedList(); // Empty Constructor
        LinkedList(T); // initialize with node ;
        LinkedList (const LinkedList&); // copy constructor ;
        


        void insert( T);
        void insertAfter (T data , T afterNode);
        void insertBefore (T data , T beforeNode);
        void deleteNode( T , int count = 1 );
        int getCount () const ;
        void display () const ;
        
        // opertators :
        void operator + (const LinkedList<T>&);
        T operator [] (const int&);
        LinkedList<T> operator = (const LinkedList<T>&);        
        
};



#endif