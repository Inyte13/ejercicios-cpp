#include <iostream>
#include <vector>

void insertion_sort(std::vector<int>& vec) {
  for (int i = 1; i < vec.size(); i++) {
    int target = vec[i];
    int j = i - 1;
    while (0 <= j && vec[j] > target) {
      vec[j + 1] = vec[j];
      j--;
    }
    vec[j + 1] = target;
  }
}

int main() {
  std::vector<int> vec = {1, 5, 3};
  insertion_sort(vec);
  for (int n : vec) {
    std::cout << n << " ";
  }
  std::cout << '\n';
  return 0;
}