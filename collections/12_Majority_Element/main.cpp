#include <iostream>
#include <vector>
#include <map>

using namespace std;

void test();
int majorityElement(vector<int> &nums);

int main()
{
    test();
    return 0;
}

void test()
{
    vector<int> testVector;
    testVector = {3, 2, 3};
    cout << majorityElement(testVector) << endl;
    testVector = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(testVector) << endl;
    testVector = {-1, 2, -1, 4, 5, -1, -2, 8, -1, 0, -1, -1, -1};
    cout << majorityElement(testVector) << endl;
}

int majorityElement(vector<int> &nums)
{
    map<int, int> numOfElements;
    for (const int &n : nums)
    {
        numOfElements[n]++;
    } // nlog(n)

    int numberOfRepeats = 0;
    int majorityElement;

    for (const auto &n : numOfElements)
    {
        if (numberOfRepeats < n.second)
        {
            numberOfRepeats = n.second;
            majorityElement = n.first;
        }
    } // n
    return majorityElement;

} // n + nlog(n)