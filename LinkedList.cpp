#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP


#include "LinkedList.h"


template <class T>
LinkedList<T>  ::   LinkedList(){ // Empty Constructor
    head = tail = NULL ;
    count = 0 ;
} 

template <class T>
LinkedList<T>::LinkedList(T data){ // initialize with node {

    head = tail = NULL ;
    Node<T> *ptr = new Node<T>(data)  ;
    head = ptr ;
    ptr->prev = NULL ;
    ptr->next= NULL ;
    count = 1 ;
} 


template <class T>
LinkedList<T>::LinkedList (const LinkedList& other){ // copy constructor {
    Node<T>* currentNode = head ;
    Node<T>* temp ;
    if (this->head != NULL){
        while(currentNode != NULL){
            temp = currentNode->next ;
            delete currentNode ;
            currentNode = temp ;
        }
        count = 0 ;
        tail = head = NULL ;
    }
    currentNode = temp = NULL ; 
    currentNode = other.head;
    while (currentNode != NULL){
        this->insert(currentNode->data);
        currentNode = currentNode->next ;
    }
} 


template <class T>
Node<T>* LinkedList<T> :: getNode (T data){

    if (tail == NULL && head == NULL){
        cout << " Linked List is empty " << endl ;
    }
    else {
        Node<T>* currentNode = head ; 
        while (currentNode != NULL){
            if (currentNode->data == data){
                return currentNode ;
            }
            currentNode = currentNode->next ;
        }
        cout << "ITEM NOT FOUND " << endl;
        return NULL ;
    }

}


template <class T>
void LinkedList<T>::insert( T data){
    Node<T>* newNode = new Node<T>(data);

    if (head == NULL && tail == NULL){
        head = tail = newNode ;
        newNode->prev = NULL ; 
        newNode->next = NULL ;
    }
    else if ( head != NULL) {
        tail->next = newNode ; 
        newNode->prev = tail ;
        tail->next = newNode ;
        tail = newNode ;
        newNode->next = NULL ;
    }
    count++;

}

template <class T>
void LinkedList<T>::insertAfter (T data , T node){
    Node<T>* newNode = new Node <T> (data);

    Node<T>* currentNode = getNode(node);

    // cout << currentNode->data << " this is the code " << endl;

    if(currentNode != NULL){
        Node<T>* nextNode = currentNode->next ;
        newNode->prev = currentNode ;
        newNode->next = nextNode ;
        nextNode->prev = newNode ;
        currentNode->next = newNode ;
        count++ ;
    }    
    

}

template <class T>
void LinkedList<T>::insertBefore (T data , T node){
    Node<T>* currentNodeNode = getNode(node);
    Node<T>* newNode = new Node<T>(data);

    if (currentNodeNode !=NULL){
        Node<T>*prevNode = currentNodeNode->prev ;
        prevNode->next = newNode;

        newNode->prev = prevNode ; 
        newNode->next = currentNodeNode ; 
        currentNodeNode->prev = newNode ;
        
        count++ ;

    }
}

template <class T>
void LinkedList<T>::deleteNode( const T  data, int count){
    if (tail == NULL && head == NULL){
        cout << " LINKED_LIST_IS_EMPTY" << endl;
        return ;
    }
    else if (head->data == data) {
        Node<T>* temp = head;
        head = head->next ;
        head->prev = NULL ;
        delete temp ;
    }
    else if (tail->data == data){
        Node<T>* temp = tail;
        tail = tail->prev ;
        
        tail->next = NULL ;
        delete temp ;
    }
    else {
        Node<T>* currentNode = head ;
        int repeatedTimes = 1 ; 
        while (currentNode != NULL){
            if(currentNode->data == data){
                if (count ==  repeatedTimes ){
                    Node<T>* prevNode = currentNode->prev ;
                    Node<T>* nextNode = currentNode-> next ;
                    prevNode->next = nextNode ;
                    nextNode->prev = prevNode; 
                    delete currentNode ;
                    return ;  
                }
                else{
                    repeatedTimes ++ ;
                }
            }
            currentNode = currentNode->next ;

        }
        cout << "ITEM_NOT_FOUND"<< endl ;
    }
    count -- ;

}

template <class T>
int LinkedList<T>::getCount () const {
    return count ;
}

// opertators :

template <class T>
void LinkedList<T>::operator + (const LinkedList<T>& other){
   Node<T>* ptr = other.head ;
   while(ptr != NULL){
    this->insert(ptr->data);
    ptr = ptr->next ;
   }
}


template <class T>
T LinkedList<T>::operator [] (const int& index){
    if (index > -1 && index < count){
        Node<T>* currentNode = head ;
        int counter = 0 ;
        while ( currentNode != NULL){
            if (index == counter){
                return currentNode->data ;
            }
            currentNode = currentNode->next ;
        }

    } 
}


template <class T>
LinkedList<T> LinkedList<T>:: operator = (const LinkedList<T>& other){
    Node<T>* currentNode = head ;
    Node<T>* temp;
    if (this->head != NULL){
        while(currentNode != NULL){
            temp = currentNode->next ;
            delete currentNode ;
            currentNode = temp ;
        }
        count = 0 ;
        tail = head = NULL ;
    }

    temp = other.head ; 
    while (temp != NULL){
        this->insert(temp->data);
        temp= temp->next ;
    }
    return *this ;
}
        
template <class T> 
void LinkedList<T> :: display ()const {
    if (head == NULL){
        cout << "LINKED_LIST_IS_EMPTY" << endl;
    }
    else{
        Node<T>*currentNode  = head ;
        while(currentNode != NULL){
            cout << currentNode->data << "\t";
            currentNode = currentNode->next ;
        }
        cout << endl;
    }
}
// this is the most important  line : 
// without this line it will cause linker errors and other problems ;
template class LinkedList<int>;
template class LinkedList<char>;


#endif 