#include <vector>

void swap(std::vector<int>& vec, int i_a, int i_b) {
  int temp = vec[i_b];
  vec[i_b] = vec[i_a];
  vec[i_a] = temp;
}