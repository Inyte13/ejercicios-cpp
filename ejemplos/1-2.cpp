#include <iostream>
using namespace std;

int main() {
  cout << "Ingrese enteros positivos, finalice con -1 \n";
  int contador = 0;
  int suma = 0;
  int num;
  cin >> num;
  while (num != -1) {
    suma += num;
    contador++;
    cin >> num;
  }
  int promedio;
  cout << "La suma es: " << suma << "\n";
  if (contador != 0)
    promedio = suma / contador;
  else
    promedio = 0;
  cout << "El promedio es : " << promedio << "\n";
}