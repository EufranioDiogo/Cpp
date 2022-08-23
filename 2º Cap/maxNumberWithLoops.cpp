#include <iostream>

using namespace std;

int main() {
  int quantityOfIterations;
  int num1;
  int num2;
  int max = -999999999;

  cout << "Quantity of numbers to process: ";
  cin >> quantityOfIterations;

  for (int i = 1; quantityOfIterations > 0; quantityOfIterations--, i++) {
    cout << "Iteration: " << i << "º.\n";
    cout << "1º Number: ";
    cin >> num1;
    cout << "2º Number: ";
    cin >> num2;

    if (num1 > max) {
      max = num1;
    }

    if (num2 > max) {
      max = num2;
    }
  }
  
  cout << "Max number founded was: " << max;

  return 0;
}