#include <iostream>
#include <vector>

template <typename T>
std::vector<T> merge(std::vector<T> vec1, std::vector<T> vec2) {
  std::vector<T> lista_ordenada;
  T i = 0;
  T j = 0;
  while (i < vec1.size() && j < vec2.size()) {
    if (vec1[i] >= vec2[j]) {
      lista_ordenada.push_back(vec2[j]);
      j++;
    } else {
      lista_ordenada.push_back(vec1[i]);
      i++;
    }
  }
  while (i < vec1.size()) {
    lista_ordenada.push_back(vec1[i]);
    i++;
  }
  while (i < vec2.size()) {
    lista_ordenada.push_back(vec2[j]);
    j++;
  }
  return lista_ordenada;
}

template <typename T>
std::vector<T> merge_sort(std::vector<T> vec) {
  if (vec.size() <= 1) {
    return vec;
  }
  T mitad = vec.size() / 2;
  std::vector<T> izq(vec.begin(), vec.begin() + mitad);
  std::vector<T> der(vec.begin() + mitad, vec.end());
  std::vector<T> izq_ordenada = merge_sort(izq);
  std::vector<T> der_ordenada = merge_sort(der);
  return merge(izq_ordenada, der_ordenada);
}

int main() {
  std::vector<int> vec = {5, 1, 3, 2};
  std::vector<int> lista_ordenada = merge_sort(vec);
  for (int n : lista_ordenada) {
    std::cout << n << " ";
  }
  std::cout << '\n';
  return 0;
}