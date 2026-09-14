#include <chrono>
#include <iomanip>
#include <iostream>
#include <string>

#include "./constants.h"

bool linear_search(std::string text, std::string target) {
  int final_valido = text.length() - target.length();
  for (int inicio = 0; inicio <= final_valido; inicio++) {
    int i = 0;
    while (i < target.length() && target[i] == text[inicio + i]) {
      i++;
    }
    if (i == target.length()) {
      return true;
    }
  }
  return false;
}

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  bool result = linear_search(text, target);
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration<double>(end - start).count();
  std::cout << (result ? "La palabra se encontró" : "La palabra no se encontró")
            << "\n";
  std::cout << std::fixed << std::setprecision(9);
  std::cout << "Tiempo ejecución: " << duration << "s" << "\n";
  return 0;
}