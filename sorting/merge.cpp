#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> vec1, std::vector<int> vec2) {
  std::vector<int> lista_ordenada;
  int i = 0;
  int j = 0;
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

std::vector<int> merge_sort(std::vector<int> vec) {
  if (vec.size() <= 1) {
    return vec;
  }
  int mitad = vec.size() / 2;
  std::vector<int> izq(vec.begin(), vec.begin() + mitad);
  std::vector<int> der(vec.begin() + mitad, vec.end());
  std::vector<int> izq_ordenada = merge_sort(izq);
  std::vector<int> der_ordenada = merge_sort(der);
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