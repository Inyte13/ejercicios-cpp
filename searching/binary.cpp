#include <chrono>
#include <iomanip>
#include <string>
#include <vector>

#include "../sorting/merge.h"
#include "../utils/split.cpp"
#include "./constants.h"

bool binary_search(std::vector<std::string> vec, std::string target) {
  int inicio = 0;
  int final = vec.size() - 1;
  while (inicio <= final) {
    int mitad = inicio + (final - inicio) / 2;
    if (target == vec[mitad]) {
      return true;
    } else if (vec[mitad] < target) {
      inicio = mitad + 1;
    } else {
      final = mitad - 1;
    }
  }
  return false;
}

int main() {
  std::vector<std::string> sorted_vec = merge_sort(split(text));
  auto start = std::chrono::high_resolution_clock::now();
  bool result = binary_search(sorted_vec, target);
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration<double>(end - start).count();
  std::cout << (result ? "La palabra se encontró" : "La palabra no se encontró")
            << "\n";
  std::cout << std::fixed << std::setprecision(9);
  std::cout << "Tiempo ejecución: " << duration << "s" << "\n";
  return 0;
}