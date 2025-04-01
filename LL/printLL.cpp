// to print out all the values of a linked list

#include <iostream>

using namespace std;

class Node{
  public:
    int value;
    Node* next;
    //Constructor
    Node(int value){
      this->value = value;
      next = nullptr; //next is a pointer to the next node
    };
};

class LinkedList{
  private:
    Node* head;
    Node* tail;
    int length;
  public:
    LinkedList(int value){
      Node* newNode = new Node(value); //Making constructor
      head = newNode;
      tail = newNode;
      length = 1;
    }
    void printList(){
      Node* temp = head;
      while(temp){
        cout << temp->value << endl; //it must sees value in class Node
        temp = temp->next; //it must see next in class Node otherwise = inaccessible 
      }
    }
    void getHead(){
      cout << head->value << endl;
    }
    void getTail(){
      cout << tail->value << endl;
    }
    void getLength(){
      cout << length << endl;
    }

    void append(int value){ //to add a new node at the end of the linked list
      Node* newNode = new Node(value);
      if(length ==0){
        head = newNode;
        tail = newNode;
      }else{
        tail->next = newNode; //tail is the last node, so we add the new node to the end of the list
        tail = newNode; //tail is now the new node
      } 
    length ++; //increment the length of the linked list
    }

    // ~LinkedList(){ //to delete the nodes, the default only deletes the head, tail and length
    //   Node* temp = head;
    //   while(head){
    //     head = head ->next;
    //     delete temp;
    //     temp = head;
    //   }
    // }

    // void deleteLast(){
    //   if(length == 0){
    //     cout << "There is no node to delete" << endl;
    //     return;
    //   }
    //   if (length == 1) {  // Special case: only one node
    //     delete head;
    //     head = nullptr;
    //     tail = nullptr;
    //     length = 0;
    //     return;
    // }
    //   Node* temp =  head;
    //   Node* pre = head;
    //   while(temp->next){
    //     pre = temp;
    //     temp = temp->next; //temp is the last node
    //   }
    //   tail = pre; //tail is now the second last node
    //   tail->next = nullptr; //to break the link between the last and second last node
    
    //   delete temp; //finaly delete the last node
    //   length --; //decrement the length of the linked list

    // }
    
    
    void deleteLast() {
      if (length == 0) {  // If the list is already empty
          cout << "There is no node to delete" << endl;
          return;
      }
  
      if (length == 1) {  // If only one node exists
          delete head;  // Free the only node
          head = nullptr;
          tail = nullptr;
          length = 0;
          return;
      }
  
      Node* temp = head;
      Node* pre = head;
  
      while (temp->next) {  // Traverse until the last node
          pre = temp;
          temp = temp->next;
      }
  
      pre->next = nullptr;  // Disconnect last node
      tail = pre;           // Update tail
      delete temp;          // Delete last node
      length--;
  
      // Extra safety check (not strictly needed but defensive)
      if (length == 0) {
          head = nullptr;
          tail = nullptr;
      }
  }

  
};



// int main(){

// LinkedList* mylinkedlist = new LinkedList(1);
//   mylinkedlist->append(2);
  
 
//   mylinkedlist->printList();
//   cout << "Deleting the last node" << endl;
//   mylinkedlist->deleteLast();
//   mylinkedlist->getHead();
//   mylinkedlist->getTail();
//   mylinkedlist->getLength();
//   cout << "Printing the linked list" << endl;
//   //Print the linked list
//   mylinkedlist->printList();
//   cout << "Deleting the last node" << endl;
//   mylinkedlist->deleteLast();
//   mylinkedlist->getHead();
//   mylinkedlist->getTail();
//   mylinkedlist->getLength();
//   cout << "Printing the linked list" << endl;
//   //Print the linked list
//   mylinkedlist->printList();
//   cout << "Deleting the last node" << endl;
//   mylinkedlist->deleteLast();
//   mylinkedlist->getHead();
//   mylinkedlist->getTail();
//   mylinkedlist->getLength();
//   cout << "Printing the linked list" << endl;

// };



int main() {
  LinkedList mylinkedlist(10);
  mylinkedlist.append(20);
  mylinkedlist.append(30);

  mylinkedlist.printList();  // Expected Output: 10 20 30

  mylinkedlist.deleteLast();
  mylinkedlist.printList();  // Expected Output: 10 20

  mylinkedlist.deleteLast();
  mylinkedlist.printList();  // Expected Output: 10

  mylinkedlist.deleteLast();
  mylinkedlist.printList();  // Expected Output: (empty list)

  mylinkedlist.deleteLast(); // Expected Output: "There is no node to delete"

  return 0;
}
