#include "Solution.h"
#include <algorithm>
#include <iostream>
#include <list>
#include <map>

Solution::Solution(/* args */) {}

Solution::~Solution() {}

double Solution::findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2) {
  std::list<int> completeList(nums1.begin(), nums1.end());

  std::list<int>::iterator pos;

  for (int elem : nums2) {
    auto isGreaterEqual = [elem](int i) { return i >= elem; };
    pos = std::find_if(completeList.begin(), completeList.end(), isGreaterEqual);
    // Add the elem if not exist
    if (pos != completeList.end()) {
      completeList.insert(pos, elem);
      continue;
    }
    completeList.insert(completeList.end(), elem);
  }

  std::list<int>::iterator middle = completeList.begin();
  std::advance(middle, completeList.size() / 2);

  if (completeList.size() % 2 != 0) {
    return static_cast<double>(*middle);
  }
  return (*middle + *(--middle)) / 2.0;
}

double Solution::findMedianSortedArrays_VERSION1(std::vector<int> &nums1, std::vector<int> &nums2) {
  if (nums1.size() == 0 && nums2.size() == 0) {
    return 0.0;
  }

  std::vector<int> newVector;
  for (auto elem : nums1) {
    newVector.push_back(elem);
  }
  for (auto elem : nums2) {
    newVector.push_back(elem);
  }

  std::sort(newVector.begin(), newVector.end());

  if (newVector.size() % 2 != 0) {
    return newVector[newVector.size() / 2];
  }

  return ((newVector[newVector.size() / 2]) + (newVector[(newVector.size() / 2) - 1])) / 2.0;
}

double Solution::findMedianSortedArrays_VERSION2(std::vector<int> &nums1, std::vector<int> &nums2) {
  int size1 = nums1.size();
  int size2 = nums2.size();
  int overalSize = size1 + size2;
  int midOfOveralSize = (overalSize / 2) + 1; // %2 != 0 Middle    otherwise     Middle

  std::map<int, int> theMap;

  std::map<int, int>::iterator theMapItterator;

  // Copy nums 1 in map
  for (auto elem : nums1) {
    theMapItterator = theMap.find(elem);
    if (theMapItterator != theMap.end()) {
      theMapItterator->second++;
    } else {
      theMap.insert({elem, 1});
    }
  }

  // Copy nums 2 in map
  for (auto elem : nums2) {
    theMapItterator = theMap.find(elem);
    if (theMapItterator != theMap.end()) {
      theMapItterator->second++;
    } else {
      theMap.insert({elem, 1});
    }
  }

  bool ifMedianIsTwoKey = false;
  int valueFromLastKey = 0;
  theMapItterator = theMap.begin();
  while (true) {
    // Substract every Value of the Keys till it reaches 0
    if ((midOfOveralSize) - ((*theMapItterator).second) > 0) {
      midOfOveralSize -= (*theMapItterator).second;
      // Check if the middle is on a Border
      if (midOfOveralSize == 1) {
        ifMedianIsTwoKey = true;
        valueFromLastKey = (*theMapItterator).first;
      }
      theMapItterator++;
      continue;
    }
    // Check of a even count on numbers
    if (overalSize % 2 != 0) {
      return static_cast<double>((*theMapItterator).first);
    }
    // Check if the Median need two Keys
    if (ifMedianIsTwoKey) {
      return ((static_cast<double>(valueFromLastKey) + static_cast<double>((*theMapItterator).first)) / 2.0);
    }
    return static_cast<double>((*theMapItterator).first);
  }

  return 0.0;
}
