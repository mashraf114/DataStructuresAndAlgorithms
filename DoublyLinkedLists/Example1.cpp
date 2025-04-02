#include <iostream>
using namespace std;
class Node{
  public:
    int value;
    Node* next;
    Node* prev;
    //Constructor
    Node(int value){
      this->value = value;
      next = nullptr;
      prev = nullptr;

    }
};

class DoublyLinkedList{
  private:
    Node* head;
    Node* tail;
    int length;
  public:
    DoublyLinkedList(int value){
      Node* newNode = new Node(value);
      head = newNode;
      tail = newNode;
      length = 1;
    }
    void printList(){
      Node* temp = head;
      while(temp){
        cout << temp->value << endl;
        temp = temp->next;

        };
     };
    
     void getHead(){
      cout << "Head: " << head->value << endl;
     }
      void getTail(){
        cout << "Tail: " << tail->value << endl;
      }
      void getLength(){
        cout << "Length: " << length << endl;
      }
};


int main(){
  DoublyLinkedList* myDLL = new DoublyLinkedList(10);
  // myLinkedList->append(20);
  // myLinkedList->append(30);
  myDLL->printList();
  myDLL->getHead();
  myDLL->getTail();
  myDLL->getLength();
  return 0;
}