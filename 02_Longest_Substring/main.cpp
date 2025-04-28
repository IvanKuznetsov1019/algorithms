#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string &str);
void test();

int main()
{
    test();
    return 0;
}

int lengthOfLongestSubstring(string &str)
{
    unordered_map<char, int> char_positions;
    int left_border = 0;
    int max_substr_length = 0;
    for (int right_border = 0; right_border < str.length(); right_border++)
    {
        if (char_positions.find(str[right_border]) != char_positions.end() && char_positions[str[right_border]] >= left_border)
        {
            left_border = char_positions[str[right_border]] + 1;
        }
        char_positions[str[right_border]] = right_border;
        max_substr_length = max(max_substr_length, right_border - left_border + 1);
    }
    return max_substr_length;
}

void test()
{
    string s = "abcabcbb";
    cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s) << endl;
    s = "bbbbb";
    cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s) << endl;
    s = "pwwkew";
    cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s) << endl;
    s = "abcd efgh ab";
    cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s) << endl;
    s = "   ";
    cout << "for strinng: " << s << " answer = " << lengthOfLongestSubstring(s) << endl;
}