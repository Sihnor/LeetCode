#include "Solution.h"
#include <iostream>
// #include <unordered_map>
#include <algorithm>
#include <vector>

Solution::Solution(/* args */) {}

Solution::~Solution() {}

int Solution::lengthOfLongestSubstring(std::string s) {
  std::vector<char> vector;
  int uniqueChars = 0;
  int maxUniqueChars = 0;

  for (int i = 0; i < s.size(); i++) {
    if (std::find(vector.begin(), vector.end(), s[i]) != vector.end()) {
      vector.erase(vector.begin(), std::find(vector.begin(), vector.end(), s[i]) + 1);

      uniqueChars = vector.size();
    }
    uniqueChars++;
    vector.push_back(s[i]);

    if (uniqueChars > maxUniqueChars) {
      maxUniqueChars = uniqueChars;
    }
  }

  return maxUniqueChars;
}
