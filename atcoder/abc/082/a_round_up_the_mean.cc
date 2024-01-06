#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int a;
  int b;
  std::cin >> a >> b;

  const int rounded_avg = (a + b + 1) / 2;
  std::cout << rounded_avg << '\n';
}
