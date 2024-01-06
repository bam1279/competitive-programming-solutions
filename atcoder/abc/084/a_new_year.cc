#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int m;
  std::cin >> m;

  constexpr int HOURS_IN_A_DAY = 24;
  std::cout << HOURS_IN_A_DAY + HOURS_IN_A_DAY - m << '\n';
}
