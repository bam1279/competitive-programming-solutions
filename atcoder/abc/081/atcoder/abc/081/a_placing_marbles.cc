#include <iostream>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::string s;
  std::cin >> s;

  int square_count = 0;
  if (s[0] == '1') ++square_count;
  if (s[1] == '1') ++square_count;
  if (s[2] == '1') ++square_count;

  std::cout << square_count << '\n';
}
