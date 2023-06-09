#include "Solution.h"
#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[]) {
  Solution test;

  std::string s = "anagram";
  std::string t = "nagaram";

  std::cout << test.isAnagram(s, t) << std::endl;

  s = "rat";
  t = "car";
  std::cout << test.isAnagram(s, t) << std::endl;
}
