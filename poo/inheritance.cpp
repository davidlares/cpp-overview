#include <iostream>
#include <string>

using namespace std;

// base class
class Shape {
  public:
    void setValues(int a, int b){
      width = a;
      height = b;
    }
  protected:
      int height;
      int width;
};

// another base class
class Description {
  public:
  void print(string description_){
    cout << "We are using " << description_ << " Class" << endl;
  }
};

// inheritance -> MULTIPLE
class Rectangle : public Shape, public Description {
  public:
    int area(){
      return (height * width);
    }
};

// inheritance
class Triangle : public Shape {
  public:
    int area(){
      return (height * width/2);
    }
};

int main(){
  Rectangle rec;
  Triangle t;
  rec.setValues(15,10);
  cout << "The R Area is: " << rec.area() << endl;
  t.setValues(15,10);
  cout << "The T Area is: " << t.area() << endl;
  rec.print("Rectangle");
}
