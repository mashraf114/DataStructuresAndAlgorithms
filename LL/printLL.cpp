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
    void append(int value){
      Node* newNode = new Node(value);
      if(length == 0){
        head = newNode;
        tail = newNode;
      }else{
        tail->next = newNode;
        tail = newNode;
      }
      length++;
    }
};


int main(){

LinkedList* mylinkedlist = new LinkedList(10);
  mylinkedlist->append(20);
  // mylinkedlist->append(30);
  // mylinkedlist->append(40);
  // mylinkedlist->append(50);
  mylinkedlist->getHead();
  mylinkedlist->getTail();
  mylinkedlist->getLength();
  cout << "Printing the linked list" << endl;
  //Print the linked list
mylinkedlist->printList();
  return 0;




};