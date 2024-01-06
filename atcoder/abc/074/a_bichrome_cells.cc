#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  int a;
  std::cin >> n >> a;
  const int num_black = n * n - a;
  std::cout << num_black << '\n';
}
