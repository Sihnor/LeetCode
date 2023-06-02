#include "Solution.h"
#include <iostream>

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}
/// @brief Search for two integers inside an vetor wich will sum up that will be equal the target number
/// @param nums an vector of int 
/// @param target the desired sum  
/// @return a vector of indices whose values in the vector sum up to the target value 
std::vector<int> Solution::twoSum(std::vector<int>& nums, int target){
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i+1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i,j};
            }
        }
    }
    return {-1, -1};
}

/// @brief a test function that will test the functionality of the function \ref twoSum 
/// @return return a true if all test are successfull
bool Solution::runTest_twoSum() {

  // ------------- Test 1 -------------
  std::vector<int> nums{2, 7, 11, 15};
  int target = 9;

  if (this->twoSum(nums, target) != std::vector<int>{0, 1})
    {
    std::cout << "Test 1: is false" << std::endl;
    return false;
  }
  std::cout << "Test 1: is correct" << std::endl;
  
  // ------------- Test 2 -------------
  nums = { 3,2,4 };
  target = 6;

  if (this->twoSum(nums, 6) != std::vector<int>{1, 2})
    {
    std::cout << "Test 2: is false" << std::endl;
    return false;
  }
  std::cout << "Test 2: is correct" << std::endl;

  // ------------- Test 3 -------------
  nums = {3,3};
  target = 6;

  if (this->twoSum(nums, 6) != std::vector<int>{0, 1})
    {
    std::cout << "Test 3: is false" << std::endl;
    return false;
  }
  std::cout << "Test 3: is correct" << std::endl;

  return true;
}