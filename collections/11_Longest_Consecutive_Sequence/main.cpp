#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void test();
int longestConsecutive(vector<int> &nums);

int main()
{
    test();
    return 0;
}

void test()
{
    vector<int> testVector;
    testVector = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(testVector) << endl;
    testVector = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    cout << longestConsecutive(testVector) << endl;
    testVector = {1, 0, 1, 2};
    cout << longestConsecutive(testVector) << endl;
}

int longestConsecutive(vector<int> &nums)
{
    int sequanceLength = 1;
    unordered_set<int> uniqueNums;
    for (const int &n : nums)
    {
        uniqueNums.insert(n);
    }
    for (const int &n : uniqueNums)
    {
        if (uniqueNums.find(n - 1) == uniqueNums.end())
        {
            int item = n;
            while (uniqueNums.find(++item) != uniqueNums.end())
            {
                sequanceLength++;
            }
        }
    }
    return sequanceLength;
}