#include <iostream>
#include <vector>

template <typename T>
std::vector<T> merge(std::vector<T> vec1, std::vector<T> vec2) {
  std::vector<T> sorted_vec;
  int i = 0;
  int j = 0;
  while (i < vec1.size() && j < vec2.size()) {
    if (vec1[i] >= vec2[j]) {
      sorted_vec.push_back(vec2[j]);
      j++;
    } else {
      sorted_vec.push_back(vec1[i]);
      i++;
    }
  }
  while (i < vec1.size()) {
    sorted_vec.push_back(vec1[i]);
    i++;
  }
  while (j < vec2.size()) {
    sorted_vec.push_back(vec2[j]);
    j++;
  }
  return sorted_vec;
}

template <typename T>
std::vector<T> merge_sort(std::vector<T> vec) {
  if (vec.size() <= 1) {
    return vec;
  }
  int mitad = vec.size() / 2;
  std::vector<T> izq(vec.begin(), vec.begin() + mitad);
  std::vector<T> der(vec.begin() + mitad, vec.end());
  std::vector<T> izq_ordenada = merge_sort(izq);
  std::vector<T> der_ordenada = merge_sort(der);
  return merge(izq_ordenada, der_ordenada);
}
