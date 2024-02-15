/*
 Copyright (c) 2024 bam1279

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

#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  constexpr char kBlackSquare = '#';
  int h, w;
  std::cin >> h >> w;
  std::vector<std::string> grid(h);
  std::vector<bool> enabled_row(h);
  std::vector<bool> enabled_col(w);

  for (int i = 0; i < h; ++i) {
    std::cin >> grid[i];
    for (int j = 0; j < w; ++j) {
      if (grid[i][j] == kBlackSquare) {
        enabled_row[i] = true;
        enabled_col[j] = true;
      }
    }
  }

  for (int i = 0; i < h; ++i) {
    if (enabled_row[i]) {
      for (int j = 0; j < w; ++j) {
        if (enabled_col[j]) std::cout << grid[i][j];
      }
      std::cout << '\n';
    }
  }
}
