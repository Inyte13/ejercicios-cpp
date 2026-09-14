#include <chrono>
#include <iomanip>
#include <iostream>
#include <vector>

template <typename T>
void insertion_sort(std::vector<T>& vec) {
  for (int i = 1; i < vec.size(); i++) {
    T target = vec[i];
    int j = i - 1;
    while (0 <= j && vec[j] > target) {
      vec[j + 1] = vec[j];
      j--;
    }
    vec[j + 1] = target;
  }
}

int main() {
  std::vector<int> vec = {
      99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83,
      82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66,
      65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49,
      48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32,
      31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15,
      14, 13, 12, 11, 10, 9,  8,  7,  6,  5,  4,  3,  2,  1,  0};
  auto start = std::chrono::high_resolution_clock::now();
  insertion_sort<int>(vec);
  auto end = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration<double>(end - start).count();
  for (int n : vec) {
    std::cout << n << " ";
  }
  std::cout << '\n';
  std::cout << std::fixed << std::setprecision(9);
  std::cout << "Tiempo ejecución: " << duration << "s" << "\n";
  return 0;
}