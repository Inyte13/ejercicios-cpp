#include <iostream>

int main() {
  // Completa con ceros incluso si esta vacio
  // int arr[4] = {};
  int arr[4] = {4, 1, 3};
  int* ptr = arr;

  // Nos da la dirección de memoria, como un puntero pero nos da además el
  // tamaño PERO al pasarlo en una fn 'decay' se convierte en ptr y pierdes el
  // size
  std::cout << "La dirección de memoria usando arr: " << arr << "\n";
  std::cout << "Tamaño en bytes: " << sizeof(arr) << '\n';
  std::cout << "Size del arr: " << std::size(arr) << '\n';
  std::cout << "Accediendo al primer value: " << arr[0] << '\n';

  // En cambio el puntero propio pierde esa info pero igual sirve
  std::cout << "La dirección de memoria usando ptr: " << ptr << '\n';
  std::cout << "Tamaño en bytes: " << sizeof(ptr) << '\n';
  std::cout << "No compila: std::size(ptr)" << '\n';
  std::cout << "Accediendo al primer value: " << ptr[3] << '\n';
}