#include <vector>

#include "../utils/swap.cpp"

int mediana(std::vector<int>& vec, int i_low, int i_high) {
  int i_middle = (i_high - i_low) / 2 + i_low;
  if (vec[i_low] > vec[i_middle]) {
    swap(vec, i_low, i_middle);
  }
  if (vec[i_low] > vec[i_high]) {
    swap(vec, i_low, i_high);
  }
  if (vec[i_middle] > vec[i_high]) {
    swap(vec, i_middle, i_high);
  }
  return i_middle;
}