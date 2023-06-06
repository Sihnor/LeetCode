#include "Solution.h"
#include <iostream>

int main(int argc, char const *argv[]) {
  Solution test;

  std::cout << test.lengthOfLongestSubstring(" d") << std::endl;             // 2
  std::cout << test.lengthOfLongestSubstring("bbbbb") << std::endl;          // 1
  std::cout << test.lengthOfLongestSubstring("pwwkesjw") << std::endl;       // 5
  std::cout << test.lengthOfLongestSubstring("dvdf") << std::endl;           // 3
  std::cout << test.lengthOfLongestSubstring("anviaj") << std::endl;         // 5
  std::cout << test.lengthOfLongestSubstring("kubdypzxdivrqa") << std::endl; // 10
  std::cout << test.lengthOfLongestSubstring("abcabcbb") << std::endl;       // 3

  return 0;
}
