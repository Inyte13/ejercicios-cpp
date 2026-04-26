#include <iostream>

int main() {
  int size = 4;
  // SOLO para inicializar con ceros se usa ()
  // int* ptr = new int[size]();
  
  // Completa con ceros incluso si esta vacío
  // int* ptr = new int[size]{};
  int* ptr = new int[size]{0, 1, 2};
  
  // El tamaño solo lo puedes tener asi, separado
  std::cout << "La dirección de memoria usando arr: " << ptr << "\n";
  std::cout << "Tamaño en bytes: " << sizeof(ptr) << '\n';
  std::cout << "No compila: std::size(ptr)" << '\n';
  std::cout << "Accediendo al primer value: " << ptr[4] << '\n';
}