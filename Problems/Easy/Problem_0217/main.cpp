#include "Solution.h"

#include <iostream>

int main(int argc, char const *argv[]) {
  Solution test;

  std::vector<int> testVector = {1, 2, 3, 1};

  std::cout << test.containsDuplicate(testVector) << std::endl;
  return 0;
}
