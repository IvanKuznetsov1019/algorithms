#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void test();
vector<int> removeDuplicatesKeepOrder(vector<int> &nums);

int main()
{
    test();
    return 0;
}

void test()
{
    vector<int> data;
    vector<int> answer;

    data = {1, 6, 2, 2, 0};
    answer = removeDuplicatesKeepOrder(data);
    for (auto item : answer)
    {
        cout << item << ' ';
    }
    cout << endl;

    data = {5, 5, 5, 5, 5};
    answer = removeDuplicatesKeepOrder(data);
    for (auto item : answer)
    {
        cout << item << ' ';
    }
    cout << endl;

    data = {10, 3, 1, 1, 10, 1, 3};
    answer = removeDuplicatesKeepOrder(data);
    for (auto item : answer)
    {
        cout << item << ' ';
    }
    cout << endl;
}

vector<int> removeDuplicatesKeepOrder(vector<int> &nums)
{
    unordered_set<int> unique_elements;
    vector<int> result_seq;
    for (auto item : nums)
    {
        if (unique_elements.find(item) == unique_elements.end())
        {
            result_seq.push_back(item);
            unique_elements.insert(item);
        }
    }
    return result_seq;
}