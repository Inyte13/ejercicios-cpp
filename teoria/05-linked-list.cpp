#include <iostream>

struct Node {
  int num;
  Node* next = nullptr;
};

int main() {
  Node* node3 = new Node;
  node3->num = 3;

  Node* node2 = new Node;
  node2->num = 2;
  node2->next = node3;

  Node* node1 = new Node;
  node1->num = 1;
  node1->next = node2;

  // [1]──▶[2]──▶[3]──▶nullptr
  Node* ptrTemp = node1;
  while (ptrTemp != nullptr) {
    std::cout << ptrTemp->num << '\n';
    ptrTemp = ptrTemp->next;
  }
  return 0;
}