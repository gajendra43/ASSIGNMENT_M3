#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Enter the number of elements: ";
  cin >> n;

  int arr[n];

  cout << "Enter " << n << " elements: "<<endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  float average = (float)sum / n;

  cout << "Sum of the array elements: " << sum << endl;
  cout << "Average of the array elements: " << average << endl;

  return 0;
}
