#include <iostream>

using namespace std;

int main() {

  int a = 20;
  double b = 6.68;


  double result1 = a + b;
  cout << "Implicit conversion: " << result1 << endl;

  int c = 50;
  double d = 6.7;


  int result2 = c + static_cast<int>(d);
  cout << "Explicit conversion: " << result2 << endl;
  return 0;
}
