#include <iostream>

using namespace std;

int globalVariable = 30;


void localScope() {
  int localVariable = 50;
  cout << "Inside localScope function:" << endl;
  cout << "  Global variable: " << globalVariable << endl;
  cout << "  Local variable: " << localVariable << endl;
}

int main() {
  cout << "Inside main function:" << endl;
  cout << "  Global variable: " << globalVariable << endl;


  localScope();

  return 0;
}
