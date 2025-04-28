#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void test();
vector<int> twoSum(vector<int> &nums, int target);

int main()
{
    test();
    return 0;
}

vector<int> twoSum(vector<int> &nums, int target)
{
    int complement;
    unordered_map<int, int> complement_indexes;
    vector<int> ans(2, -1);
    for (int i = 0; i < nums.size(); i++)
    {
        complement = target - nums[i];
        if (complement_indexes.find(complement) != complement_indexes.end())
        {
            ans[0] = complement_indexes[complement];
            ans[1] = i;
            break;
        }
        complement_indexes[nums[i]] = i;
    }
    return ans;
}

void test()
{
    vector<int> result(2);
    vector<int> data;
    int target;
    data = {2, 7, 11, 15};
    target = 9;
    result = twoSum(data, target);
    cout << result[0] << ", " << result[1] << endl;
    data = {3, 2, 4};
    target = 6;
    result = twoSum(data, target);
    cout << result[0] << ", " << result[1] << endl;
    data = {3, 3};
    target = 6;
    result = twoSum(data, target);
    cout << result[0] << ", " << result[1] << endl;
}