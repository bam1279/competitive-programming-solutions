/*
 Copyright (c) 2023-2024 bam1279

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all
 copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 SOFTWARE.
 */

#include <algorithm>
#include <iostream>
#include <map>
#include <string>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::map<std::string, int> str_to_yen;
  std::string str;

  int n;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> str;
    if (str_to_yen.contains(str)) {
      ++str_to_yen[str];
      continue;
    }
    str_to_yen[str] = 1;
  }

  int m;
  std::cin >> m;
  for (int i = 0; i < m; ++i) {
    std::cin >> str;
    if (str_to_yen.contains(str)) --str_to_yen[str];
  }

  auto CompareByYen = [](const auto &x, const auto &y) {
    return x.second < y.second;
  };
  auto max_earn =
      std::max_element(str_to_yen.begin(), str_to_yen.end(), CompareByYen);
  std::cout << std::max(max_earn->second, 0) << '\n';
}
