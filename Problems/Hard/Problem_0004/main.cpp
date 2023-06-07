#include "Solution.h"
#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {

  Solution Test;

  std::vector<int> nums1 = {1, 3};
  std::vector<int> nums2 = {2};

  // std::cout << Test.findMedianSortedArrays(nums1, nums2) << std::endl;
  //  Test.findMedianSortedArrays(nums1, nums2);

  // std::cout << std::endl;
  // std::cout << std::endl;
  // std::cout << std::endl;

  nums1 = {1, 2, 5};
  nums2 = {2, 4};

  // std::cout << Test.findMedianSortedArrays(nums1, nums2) << std::endl;
  //  Test.findMedianSortedArrays(nums1, nums2);

  // std::cout << std::endl;
  // std::cout << std::endl;
  // std::cout << std::endl;

  nums1 = {1, 2};
  nums2 = {2, 4};

  std::cout << Test.findMedianSortedArrays(nums1, nums2) << std::endl;

  nums1 = {1, 2, 4, 5, 6};
  nums2 = {2, 3, 4};

  std::cout << Test.findMedianSortedArrays(nums1, nums2) << std::endl;

  return 0;
}
