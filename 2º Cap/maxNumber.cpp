#include <iostream>

using namespace std;

int main() {
  int number1;
  int number2;
  
  cout << "First number: ";
  cin >> number1;

  int max = number1;

  cout << endl << "Second number: ";
  cin >> number2;

  if (number2 > max) {
    max = number2;
  }

  cout << "The max number between " << "[" << number1 << ", " << number2 << "] is " << max << endl;

  return 1;
}