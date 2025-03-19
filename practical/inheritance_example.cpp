#include <iostream>
#include <string>

using namespace std;

class Person {
 protected:
  string name;
  int age;

 public:
  Person(string name, int age) : name(name), age(age) {}

  void displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

class Student : public Person {
 private:
  int rollNo;

 public:
  Student(string name, int age, int rollNo) : Person(name, age), rollNo(rollNo) {}

  void displayInfo() {
    Person::displayInfo();  
    cout << "Roll No: " << rollNo << endl;
  }
};

class Teacher : public Person {
 private:
  string subject;

 public:
  Teacher(string name, int age, string subject)
      : Person(name, age), subject(subject) {}

  void displayInfo() {
    Person::displayInfo();
    cout << "Subject: " << subject << endl;
  }
};

int main() {
  Student student("gajendra", 24, 101);
  Teacher teacher("mr.vikram ", 35, "Physics");

  cout << "Student Information:" << endl;
  student.displayInfo();

  cout << "\nTeacher Information:" << endl;
  teacher.displayInfo();

  return 0;
}
