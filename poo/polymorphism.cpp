#include <iostream>
#include <string>

using namespace std;

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

class Rectangle : public Shape {
  public:
    int area(){
      return (height * width);
    }
};

class Triangle : public Shape {
  public:
    int area(){
      return (height * width/2);
    }
};

int main(){
  // having many form of definitions
  Rectangle rec;
  Triangle t;
  // with pointers usage
  Shape *sh = &rec;
  Shape *sh2 = &t;
  // another way
  sh->setValues(10,20);
  sh2->setValues(10,20);
  cout << rec.area() << endl;
  cout << t.area() << endl;
}
