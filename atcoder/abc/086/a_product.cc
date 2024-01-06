#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int a, b;
  std::cin >> a >> b;

  const bool is_even = a * b % 2 == 0;
  std::cout << (is_even ? "Even" : "Odd") << '\n';
}
