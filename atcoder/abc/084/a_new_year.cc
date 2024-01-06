#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int m;
  std::cin >> m;

  constexpr int kHoursPerDay = 24;
  const int hours_left = kHoursPerDay + kHoursPerDay - m;
  std::cout << hours_left << '\n';
}
