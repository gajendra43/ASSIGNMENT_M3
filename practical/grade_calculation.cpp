#include <iostream>

using namespace std;

int main() {
  int marks1,marks2,marks3,marks4,marks5,marks,per;

  cout << "Enter the student's marks for subject1: ";
  cin >> marks1;
  cout << "Enter the student's marks for subject2: ";
  cin >> marks2;
  cout << "Enter the student's marks for subject3: ";
  cin >> marks3;
  cout << "Enter the student's marks for subject4: ";
  cin >> marks4;
  cout << "Enter the student's marks for subject5: ";
  cin >> marks5;
  
	marks=marks1+marks2+marks3+marks4+marks5;
	per=marks/5;
	cout << "Total marks for all subject:"<<marks<< endl;
	cout << "calculated percentage is:"<<per<< endl;
	
  if (per >= 90) {
    cout << "Grade: A" << endl;
  } else if (per >= 80) {
    cout << "Grade: B" << endl;
  } else if (per >= 70) {
    cout << "Grade: C" << endl;
  } else if (per >= 60) {
    cout << "Grade: D" << endl;
  } else {
    cout << "Grade: F" << endl;
  }

  return 0;
}
