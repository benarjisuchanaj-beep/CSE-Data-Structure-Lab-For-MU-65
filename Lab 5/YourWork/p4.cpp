#include <iostream>
using namespace std;


struct Node {

    int val;

    Node *next;

};

struct Queue {

 Node *headPtr;

     Queue(){

            headPtr = NULL;
            cout<< "STL- Style Queue initialized!\n" <<endl;
        }


  bool Empty()
  {
      return headPtr == NULL;
  }

 };

 int main()
 {
     Queue q;

     if(q.Empty()){
         cout <<"The queue is currently empty.\n";

         }
     return 0;
 }



