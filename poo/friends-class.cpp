#include <iostream>
#include <string>

using namespace std;

class MyClass {
  friend class MyAnotherClass; // allow to access private attrs
  private:
    int secret = 10; // private attrs on another class? => Friend Class
};

class MyAnotherClass {
  public:
    void showSecret(MyClass mc){
      mc.secret++;
      cout << "Showing secret attr on class: " << mc.secret << endl;
    };
};

int main(){
  // instance
  MyAnotherClass mac;
  MyClass mc;
  mac.showSecret(mc);
}
