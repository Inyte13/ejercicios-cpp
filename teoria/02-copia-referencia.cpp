#include <iostream>
using namespace std;
int copia() {
  cout << "Copia, sin el Operador de Referencia (&)\n";
  int num1 = 100;
  int num2 = num1;
  num2 = 39;
  cout << "num1: " << num1 << "\n";
  cout << "num2: " << num2 << "\n";
  return 0;
}
