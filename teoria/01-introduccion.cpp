#include <iostream>
// Si quieres desactivar todos los assert:
//#define NDEBUG
#include <cassert>
using namespace std;

double pulgadasACentimetros(double pulgadas) {
  if (pulgadas < 0) {
    cerr << "La medida dada no puede ser negativa \n";
    return -1.0;
  } else {
    return 2.54 * pulgadas;
  }
}

double inchesToCentimeters(double pulgadas) {
  // Si falla TODO el programa terminará
  assert(pulgadas >= 0);
  return 2.54 * pulgadas;
}

int main() {
  cout << "Hola mundo \n";
  cout << pulgadasACentimetros(10) << '\n';
  return 0;
}