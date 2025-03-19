#include <iostream>

using namespace std;

class Calculator {
 public:
  double add(double num1, double num2) {
    return num1 + num2;
  }

  double subtract(double num1, double num2) {
    return num1 - num2;
  }

  double multiply(double num1, double num2) {
    return num1 * num2;
  }

  double divide(double num1, double num2) {
    if (num2 == 0) {
      cout << "Error: Division by zero!" << endl;
      return 0;
    } else {
      return num1 / num2;
    }
  }
};

int main() {
  Calculator cal;

  double num1, num2;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  cout << "Addition: " << cal.add(num1, num2) << endl;
  cout << "Subtraction: " << cal.subtract(num1, num2) << endl;
  cout << "Multiplication: " << cal.multiply(num1, num2) << endl;
  cout << "Division: " << cal.divide(num1, num2) << endl;

  return 0;
}
