#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>

int mcd(int a, int b) {
  for (int i = std::min(a, b); i > 2; i--) {
    if (a % i == 0 && b % i == 0) {
      return i;
    }
  }
}

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  int result = mcd(12345, 67890);
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration<double>(end - start).count();
  std::cout << "MCD: " << result << "\n";
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Tiempo ejecución: " << duration << "s" << "\n";
  return 0;
}