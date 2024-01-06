#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n, a;
  std::cin >> n >> a;

  const bool can_pay_exactly = n % 500 <= a;
  std::cout << (can_pay_exactly ? "Yes" : "No") << '\n';
}
