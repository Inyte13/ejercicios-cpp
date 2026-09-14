#include <iostream>
#include <vector>

template <typename T>
void selection_sort(std::vector<T>& vec) {
  for (int i = 0; i < vec.size(); i++) {
    int min = i;
    for (int j = i + 1; j < vec.size(); j++) {
      std::cout << "¡Comparación!" << '\n';
      if (vec[min] > vec[j]) {
        min = j;
      }
    }
    if (min != i) {
      T target = vec[i];
      vec[i] = vec[min];
      vec[min] = target;
      std::cout << "¡Intercambio!" << '\n';
    }
  }
}

int main() {
  std::vector<float> vec = {5.3, 1.2, 3.1, 2.4, 5.3, 6.3, 0.2};
  selection_sort<float>(vec);
  for (float n : vec) {
    std::cout << n << " ";
  }
  std::cout << '\n';
  return 0;
}