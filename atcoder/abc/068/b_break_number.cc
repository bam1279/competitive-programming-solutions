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

int FindGreatestPowerOfTwo(int n) {
  constexpr int kSixtyFour = 64;
  constexpr int kThirtyTwo = 32;
  constexpr int kSixteen = 16;
  constexpr int kEight = 8;
  constexpr int kFour = 4;
  constexpr int kTwo = 2;
  if (n >= kSixtyFour) return kSixtyFour;
  if (n >= kThirtyTwo) return kThirtyTwo;
  if (n >= kSixteen) return kSixteen;
  if (n >= kEight) return kEight;
  if (n >= kFour) return kFour;
  if (n >= kTwo) return kTwo;
  return 1;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int n;
  std::cin >> n;

  std::cout << FindGreatestPowerOfTwo(n) << '\n';
}
