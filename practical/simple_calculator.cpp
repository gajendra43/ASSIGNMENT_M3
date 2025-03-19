#include <iostream>

using namespace std;

int add(int num1, int num2) {
  return num1 + num2;
}

int subtract(int num1, int num2) {
  return num1 - num2;
}

int multiply(int num1, int num2) {
  return num1 * num2;
}


float divide(int num1, int num2) {
  if (num2 == 0) {
    cout << "Error: Division by zero is not allowed." << endl;
    return 0;
  } else {
    return (float)num1 / num2;
  }
}

int main() {
  int num1, num2;
  char operation;

  cout << "Simple Calculator" << endl;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  cout << "Enter operation (+, -, *, /): ";
  cin >> operation;

  switch (operation) {
    case '+':
      cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
      break;
    case '/':
      cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
      break;
    default:
      cout << "Invalid operation." << endl;
  }

  return 0;
}
