#include <iostream>

using namespace std;

int main() {
  int age = 24;
  int score = 78;

  float height = 1.93;
  double distance = 97895.1879;

  char initial = 'A';

  // String variable
  string name = "gajendra";

  // Constant
  const double PI = 3.14159;

  // Displaying values
  cout << "Age: " << age << endl;
  cout << "Score: " << score << endl;
  cout << "Height: " << height << endl;
  cout << "Distance: " << distance << endl;
  cout << "Initial: " << initial << endl;
  cout << "Name: " << name << endl;
  cout << "PI: " << PI << endl;

  // Performing operations
  int sum = age + score;
  cout << "Sum of age and score: " << sum << endl;

  float area = PI * height * height;
  cout << "Area of a circle: " << area << endl;

  return 0;
}
