#include <string>
#include <vector>

std::vector<std::string> split(std::string text) {
  int i = 0;
  std::vector<std::string> vec;
  while (true) {
    int index_space = text.find(' ', i);
    if (index_space == std::string::npos) {
      vec.push_back(text.substr(i));
      break;
    }
    vec.push_back(text.substr(i, index_space - i));
    i = index_space + 1;
  }
  return vec;
}