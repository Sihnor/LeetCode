#include "Solution.h"
#include <algorithm>
#include <map>

Solution::Solution(/* args */) {}

Solution::~Solution() {}

bool Solution::isAnagram(std::string s, std::string t) {
  std::sort(s.begin(), s.end());
  std::sort(t.begin(), t.end());

  return s == t;
}

bool Solution::isAnagram_VERSION1(std::string s, std::string t) {
  if (s.size() != t.size()) {
    return false;
  }

  std::map<char, int> sMap, tMap;

  for (int i = 0; i < s.size(); i++) {
    if (sMap.find(s[i]) == sMap.end()) {
      sMap.insert({s[i], 0});
    }
    sMap[s[i]]++;

    if (tMap.find(t[i]) == tMap.end()) {
      sMap.insert({t[i], 0});
    }
    tMap[t[i]]++;
  }

  if (sMap == tMap) {
    return true;
  }
  return false;
}
