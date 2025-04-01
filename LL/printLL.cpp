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

    ~LinkedList(){ //to delete the nodes, the default only deletes the head, tail and length
      Node* temp = head;
      while(head){
        head = head ->next;
        delete temp;
        temp = head;
      }
    }
};



int main(){

LinkedList* mylinkedlist = new LinkedList(1);
  mylinkedlist->append(2);
  
  mylinkedlist->getHead();
  mylinkedlist->getTail();
  mylinkedlist->getLength();
  cout << "Printing the linked list" << endl;
  //Print the linked list
  mylinkedlist->printList();

};

