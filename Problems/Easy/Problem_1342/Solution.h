#include <vector>

class Solution {
public:
  int numberOfSteps(int num) {

std::vector<int> temp = new std::vector();

    int steps = 0;
    while (num > 0) {
      if (num % 2 == 0) {
        num /= 2;
        steps++;
      } else {
        num -= 1;
        steps++;
      }
    }
    return steps;
  }
};
;