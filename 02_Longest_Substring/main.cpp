#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string &str);
void test();

int main() {
  test();
  return 0;
}

int lengthOfLongestSubstring(string &str) {
  unordered_map<char, int> charPositions;
  int leftBorder = 0;
  int maxSubstringLength = 0;
  for (int rightBorder = 0; rightBorder < str.length(); rightBorder++) {
    if (charPositions.find(str[rightBorder]) != charPositions.end() &&
        charPositions[str[rightBorder]] >= leftBorder) {
      leftBorder = charPositions[str[rightBorder]] + 1;
    }
    charPositions[str[rightBorder]] = rightBorder;
    maxSubstringLength = max(maxSubstringLength, rightBorder - leftBorder + 1);
  }
  return maxSubstringLength;
}

void test() {
  string s = "abcabcbb";
  cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s)
       << endl;
  s = "bbbbb";
  cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s)
       << endl;
  s = "pwwkew";
  cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s)
       << endl;
  s = "abcd efgh ab";
  cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s)
       << endl;
  s = "   ";
  cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s)
       << endl;
}