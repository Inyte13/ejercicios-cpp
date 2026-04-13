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

int referencia() {
  cout << "Referencia, apunta las dos variables al mismo espacio en memoria "
          "con el Operador de Referencia (&)\n";
  int num1 = 100;
  int& num2 = num1;
  num2 = 39;
  cout << "num1: " << num1 << "\n";
  cout << "num2: " << num2 << "\n";
  return 0;
}

int main() {
  copia();
  referencia();
  return 0;
}