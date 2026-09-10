#include <vector>

std::vector<int> merge_sort(std::vector<int> vec) {
  if (vec.size() == 1) {
    return vec;
  }
  int mitad = vec.size() / 2;
  std::vector<int> izq(vec.begin(), vec.begin() + mitad);
  std::vector<int> der(vec.begin() + mitad, vec.end());
  std::vector<int> izq_ordenada = merge_sort(izq);
  std::vector<int> der_ordenada = merge_sort(der);
  
}