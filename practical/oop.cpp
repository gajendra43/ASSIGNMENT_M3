#include <iostream>

using namespace std;

class Rectangle {
public:
  int length;
  int width;

  int calculateArea() {
    return length * width;
  }
};

int main() {
  Rectangle rect;

  cout << "Enter the length of the rectangle: ";
  cin >> rect.length;

  cout << "Enter the width of the rectangle: ";
  cin >> rect.width;

  int area = rect.calculateArea();

  cout << "The area of the rectangle is: " << area;

  return 0;
}

