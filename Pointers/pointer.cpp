#include <iostream>
using namespace std;

int main(){
  int* num1 = new int(9);
  int* num2 = num1;
  *num1 = 10;
  cout << "number1 = " << *num1 << endl;
  cout << "number2 = " << *num2 << endl;  

}