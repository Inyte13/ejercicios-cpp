#include <chrono>
#include <iomanip>
#include <iostream>

int mcd(int m, int n) {
  if (n == 0) {
    return m;
  };

  return mcd(n, m % n);
}

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  int result = mcd(2030405023, 2030405011);
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration<double>(end - start).count();
  std::cout << "MCD: " << result << "\n";
  std::cout << std::fixed << std::setprecision(9);
  std::cout << "Tiempo ejecución: " << duration << "s" << "\n";
  return 0;
}