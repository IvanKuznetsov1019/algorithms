#include <iostream>
#include <vector>

using namespace std;

vector<int> plusOne(vector<int> &digits);
void test();

int main()
{
    test();
    return 0;
}

vector<int> plusOne(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
            if (i == 0)
            {
                digits.push_back(0);
                digits[i] = 1;
            }
        }
        else
        {
            digits[i] += 1;
            break;
        }
    }
    return digits;
}

void test()
{
    vector<int> v0 = {1, 2, 3, 4, 5};
    vector<int> v1 = {1, 2, 3, 4, 8};
    vector<int> v2 = {1, 2, 3, 4, 9};
    vector<int> v3 = {1, 2, 3, 9, 9};
    vector<int> v4 = {1, 9, 9, 9, 9};
    vector<int> v5 = {0, 0, 0, 0, 0};
    vector<int> v6 = {9, 9, 9, 9, 9};
    vector<int> v7 = {1};
    vector<int> v8 = {0};
    vector<int> v9 = {9};
    vector<int> vf = {};
    vector<int> a = plusOne(v0);
    for (int i = 0; i < v0.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v1);
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v2);
    cout << endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v3);
    cout << endl;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v4);
    cout << endl;
    for (int i = 0; i < v4.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v5);
    cout << endl;
    for (int i = 0; i < v5.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v6);
    cout << endl;
    for (int i = 0; i < v6.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v7);
    cout << endl;
    for (int i = 0; i < v7.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v8);
    cout << endl;
    for (int i = 0; i < v8.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(v9);
    cout << endl;
    for (int i = 0; i < v9.size(); i++)
    {
        cout << a[i] << ' ';
    }
    a = plusOne(vf);
    cout << endl;
    for (int i = 0; i < vf.size(); i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl
         << '!';
}