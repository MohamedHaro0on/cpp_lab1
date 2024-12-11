#include "LinkedList.h"



int main (){


    LinkedList<int> List;

    List.insert(1);
    List.deleteNode(2);
    List.insertAfter(100 , 3);
    
    List.insert(2);
    List.insert(3);
    List.insert(4);
    List.insert(5);
    List.insert(6);
    List.display();

    List.insertBefore(10 , 2);
    List.insertBefore(11 , 4 );
    List.display();



    List.insertAfter(100 , 5);
    List.display();
    
    
    List.deleteNode(2 ,1);
    List.deleteNode(200 , 1);
    List.display();

    return 0 ;
}