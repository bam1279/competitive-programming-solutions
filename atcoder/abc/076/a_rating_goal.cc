#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int r, g;
  std::cin >> r >> g;

  const int next_perf = 2 * g - r;
  std::cout << next_perf << '\n';
}
