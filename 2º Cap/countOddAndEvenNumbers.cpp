#include <iostream>

using namespace std;

int main() {
  int oddNumbers = 0;
  int evenNumbers = 0;
  int number;

  while (true) {
    cout << "Number: ";
    cin >> number;

    if (number == 0) {
      break;
    }

    if (number % 2 == 0) {
      evenNumbers++;
    } else {
      oddNumbers++;
    }
  }

  cout << "Quant Evens: " << evenNumbers << ", Quant Odds: " << oddNumbers << endl;
}