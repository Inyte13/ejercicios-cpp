#include <iostream>
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
