#include <iostream>

using namespace std;

int main() {
  // Arithmetic Operators
  int num1 = 34, num2 = 6;
  cout << "First number: " << num1<< endl;
  cout << "Second number: " << num2<< endl;
  
  
  cout << "Arithmetic Operators:" << endl;
  cout << "num1 + num2 = " << num1 + num2 << endl;
  cout << "num1 - num2 = " << num1 - num2 << endl;
  cout << "num1 * num2 = " << num1 * num2 << endl;
  cout << "num1 / num2 = " << num1 / num2 << endl;
  cout << "num1 % num2 = " << num1 % num2 << endl;

  // Relational Operators
  cout << "\nRelational Operators:" << endl;
  cout << "num1 == num2: " << (num1 == num2) << endl;
  cout << "num1 != num2: " << (num1 != num2) << endl;
  cout << "num1 > num2: " << (num1 > num2) << endl;
  cout << "num1 < num2: " << (num1 < num2) << endl;
  cout << "num1 >= num2: " << (num1 >= num2) << endl;
  cout << "num1 <= num2: " << (num1 <= num2) << endl;

  // Logical Operators
  bool var1 = true, var2 = false;
  
  cout << "\nLogical Operators:" << endl;
  cout << "var1 && var2: " << (var1 && var2) << endl;
  cout << "var1 || var2: " << (var1 || var2) << endl;
  cout << "!var1: " << (!var1) << endl;

  // Bitwise Operators
  int num3 = 82, num4 = 7;
  
  cout << "\nBitwise Operators:" << endl;
  cout << "num3 & num4: " << (num3 & num4) << endl;
  cout << "num3 | num4: " << (num3 | num4) << endl;
  cout << "num3 ^ num4: " << (num3 ^ num4) << endl;
  
  return 0;
}
