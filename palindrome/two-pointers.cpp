#include <iostream>
#include <string>

bool is_palindrome(std::string str) {
  int i = 0;
  int j = str.size() - 1;
  while (i < j) {
    if (str[i] != str[j]) {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main() {
  bool result = is_palindrome("123454321");
  std::cout << (result ? "Es palíndromo" : "No es palíndromo")
            << "\n";
}