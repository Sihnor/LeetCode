#include "Solution.h"
#include <algorithm>
#include <unordered_set>

Solution::Solution(/* args */) {}

Solution::~Solution() {}

bool Solution::containsDuplicate(std::vector<int> &nums) {
  // ATTENTION VECTOR WILL BE MANIPULATED
  std::sort(nums.begin(), nums.end());
  for (int i = 0; i < nums.size() - 1; i++) {
    if (nums[i] == nums[i + 1]) {
      return true;
    }
  }
  return false;
}

bool Solution::containsDuplicate_VERSION_1(std::vector<int> &nums) {
  std::unordered_set<int> tempSet;
  for (int elem : nums) {
    if (tempSet.find(elem) != tempSet.end()) {
      return true;
    }
    tempSet.insert(elem);
  }
  return false;
}