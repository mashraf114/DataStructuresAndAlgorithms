#include <iostream>
using namespace std;

class Cookie {
  private:
    string color;
  public:
    Cookie(string color){
      this -> color = color;  
    }
    string get_color(){
      return color;
    }
    string set_color(string color){
     return this -> color = color;
    }
   
};

int main(){
  Cookie* cookie1 = new Cookie("red");
  cout << cookie1 -> get_color() << endl;
  cookie1 -> set_color("blueeee");
  cout << cookie1 -> get_color() << endl;
  Cookie* cookie2 = new Cookie("green");
  cout << cookie2 -> get_color() << endl;
  cookie2 -> set_color("yellow");
  cout << cookie2 -> get_color() << endl;

};