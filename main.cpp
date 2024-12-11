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
    cout << "the Counter " << List.getCount() << endl;

    List.insertBefore(10 , 2);
    List.insertBefore(11 , 4 );
    List.display();
    cout << "the Counter " << List.getCount() << endl;
    cout << "this is the subscript operator " << List[7] << endl;


    List.insertAfter(100 , 5);
    List.display();
    cout << "the Counter " << List.getCount() << endl;
    
    
    List.deleteNode(2 ,1);
    List.deleteNode(200 , 1);

    cout << "the Counter " << List.getCount() << endl;
    List.display();


    LinkedList<int> List2 ; 
    List2.insert(10);
    cout << " LIST 2 " << endl ; 
    List2.display();


    LinkedList <int> newList;
    newList.display();
    newList = (List2 + List);
    newList.display(); 

    return 0 ;
}