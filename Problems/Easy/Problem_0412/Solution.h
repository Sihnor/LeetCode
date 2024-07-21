#include <string>
#include <vector>

class Solution {
public:
  std::vector<std::string> fizzBuzz(int n) {
    std::vector<std::string> result;

    for (size_t i = 1; i <= n; i++) {
      if (i % 3 == 0 && i % 5 == 0) {
        result.push_back("FizzBuzz");
        continue;
      };
      if (i % 3 == 0) {
        result.push_back("Fizz");
        continue;
      };
      if (i % 5 == 0) {
        result.push_back("Buzz");
        continue;
      };

      result.push_back(std::to_string(i));
    }
    return result;
  }
};
