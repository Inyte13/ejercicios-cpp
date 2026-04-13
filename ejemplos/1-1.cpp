#include <iostream>
using namespace std;

int main() {
  int num1, num2, max;
  cout << "Dame 2 numeros: ";
  cin >> num1 >> num2;
  if (num1 >= num2) {
    max = num1;
  } else {
    max = num2;
  }
  cout << "El numero maximo es: " << max << "\n";
}