#include <iostream>

int mcd(int m, int n) {
  if (n == 0) {
    return m;
  };

  return mcd(n, m % n);
}

int main() {
  std::cout << mcd(105, 45) << "\n";
  return 0;
}