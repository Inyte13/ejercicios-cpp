template <typename T>  // Le decimos que este struct funciona con cualquier tipo
struct Node {
  T data;
  Node* next = nullptr;

  Node() {}

  // Constructor optimo
  Node(const T& item) : data(item) {}
};

int main() {
  Node<int>* first = new Node<int>;
  first->data = 1;

  Node<int>* second = new Node<int>;
  second->data = 2;
  first->next = second;

  Node<int>* third = new Node<int>;
  third->data = 3;
  second->next = third;
}