#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

vector<float> slidingWindowAverage(vector<int> &nums, int k);
void test();

int main()
{
    test();
    return 0;
}

vector<float> slidingWindowAverage(vector<int> &nums, int k)
{
    float sum_3 = 0;
    vector<float> ans;
    for (int i = 0; i < k; i++)
    {
        sum_3 += nums[i];
    }
    ans.push_back(sum_3 / k);
    for (int i = k; i < nums.size(); i++)
    {
        sum_3 += nums[i];
        sum_3 -= nums[i - k];
        ans.push_back(sum_3 / k);
    }
    return ans;
}

void test()
{
    cout << fixed << setprecision(1);
    vector<float> result;
    vector<int> data;
    int win_width;
    data = {1, 3, 5, 7, 9};
    win_width = 3;
    result = slidingWindowAverage(data, win_width);
    for (int i = 0; i < result.size(); i++)
    {

        cout << result[i] << " ";
    }
    cout << endl;
    data = {10, 20, 30, 40, 50};
    win_width = 2;
    result = slidingWindowAverage(data, win_width);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    data = {5, 10, 15};
    win_width = 1;
    result = slidingWindowAverage(data, win_width);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}