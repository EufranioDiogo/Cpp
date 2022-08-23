#include <iostream>

using namespace std;

long pow(long base, long expo) {
  long result = 1;

  if (expo == 0) {
    return 1;
  }

  for (;expo > 0; expo--) {
    result *= base;
  }

  return result;
}

int main() {
  long number = 2;
  long numberToAnalise = 131L;
  long counter = 0;
  long quantOfBytes = sizeof(long) * 8;

  cout << quantOfBytes << endl;

  while (counter < quantOfBytes) {
    long result = numberToAnalise & pow(2, counter);

    cout << counter << "º - " <<  result << endl;

    counter++;
  }
}