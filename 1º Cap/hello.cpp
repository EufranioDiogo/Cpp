#include <iostream>

using namespace std;

int sum(int a, int b);

int main()
{
  cout << "It's me, your first program.";
  cout << "1 + 3 = " << sum(1, 3);
  return 0;
}

int sum(int a, int b) {
    return a + b;
}
