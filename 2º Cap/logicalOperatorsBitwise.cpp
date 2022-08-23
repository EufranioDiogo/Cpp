#include <iostream>

using namespace std;

int main() {
  long num1 = 15, num2 = 22;

  long log = num1 && num2;

  cout << log << endl;

  long bit = num1 & num2;

  cout << bit << endl;

  //-------------------------------------
  long num1LogicNeg = !num1;

  cout << num1LogicNeg << endl;

  long num1BitNeg = ~num1;

  cout << num1BitNeg << endl;
}