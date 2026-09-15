#include <iostream>
#include <vector>

#include "../utils/mediana.cpp"

void quick_sort_lomuto(std::vector<int>& vec, int i_low, int i_high) {
  if (i_low == i_high) {
    return;
  }
  int i_piv = mediana(vec, i_low, i_high);
  swap(vec, i_low, i_piv);
  i_piv = i_low;
  int i = i_piv + 1;
  for (int j = i_low + 1; j <= i_high; j++) {
    if (vec[i_piv] > vec[j]) {
      swap(vec, j, i);
      i++;
    }
  }
  swap(vec, i - 1, i_piv);
  i_piv = i - 1;
  quick_sort_lomuto(vec, i_low, i_piv - 1);
  quick_sort_lomuto(vec, i_piv + 1, i_high);
}

int main() {
  std::vector<int> vec = {4, 2, 4, 3, 1};
  quick_sort_lomuto(vec, 0, vec.size() - 1);
  for (int n : vec) {
    std::cout << n << " ";
  }
  std::cout << '\n';
  return 0;
}