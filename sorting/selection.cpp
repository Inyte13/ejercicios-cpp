#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& vec) {
  for (int i = 0; i < vec.size(); i++) {
    int target = vec[i];
    int min = i;
    for (int j = i + 1; j < vec.size(); j++) {
      if (vec[min] > vec[j]) {
        min = j;
      }
    }
    vec[i] = vec[min];
    vec[min] = target;
  }
}

int main() {
  std::vector<int> vec = {5, 1, 3, 2};
  selectionSort(vec);
  for (int n : vec) {
    std::cout << n << " ";
  }
  std::cout << '\n';
  return 0;
}