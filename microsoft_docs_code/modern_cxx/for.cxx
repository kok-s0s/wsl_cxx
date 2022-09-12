#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{1, 2, 3};

  // c-style
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i];
  }

  // Modern C++
  for (auto &num : v) {
    std::cout << num;
  }

  return 0;
}
