#include <iostream>

int mcd(int m, int n) {
  while (n != 0) {
    int r = m % n;
    m = n;
    n = r;
  }
  return m;
}

int main() {
  std::cout << mcd(105, 45) << std::endl;
  return 0;
}