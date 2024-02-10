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

#include <cstddef>
#include <iostream>
#include <vector>

struct ButtonPress {
  int current_num;
  int target_num;
};

int CountButtonPressesToReachTarget(std::vector<int> buttons,
                                    ButtonPress button_press) {
  int press_count = 0;
  int next_num = button_press.current_num;
  for (size_t i = 0; i < buttons.size(); ++i) {
    ++press_count;
    next_num = buttons[next_num - 1];
    if (next_num == button_press.target_num) return press_count;
  }
  return -1;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;
  std::vector<int> buttons(n);
  for (int i = 0; i < n; ++i) std::cin >> buttons[i];

  ButtonPress const button_press{1, 2};
  std::cout << CountButtonPressesToReachTarget(buttons, button_press) << '\n';
}
