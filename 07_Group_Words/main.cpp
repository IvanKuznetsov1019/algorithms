#include <iostream>
#include <vector>
#include <utility>
#include <tuple>
#include <map>

using namespace std;

vector<pair<int, vector<string>>> groupWordsByLength(vector<string> &words)
{
    map<int, vector<string>> sizes_words;
    for (auto item : words)
    {
        sizes_words[item.size()].push_back(item);
    }
    vector<pair<int, vector<string>>> ans;
    for (auto item : sizes_words)
    {
        ans.push_back(item);
    }
    return ans;
}

void test()
{
    vector<string> words = {"apple", "bat", "car", "banana", "dog", "ant"};
    auto result = groupWordsByLength(words);

    // Вывод:
    // 3: ["bat", "car"]
    // 5: ["apple", "banana"]
    // 3: ["dog"]
    // 2: ["ant"]

    // Вывод будет другим, так как я не понял, по какому принципу сгруппированы слова в комментарии выше

    for (const auto &[size, words] : result)
    {
        bool is_first = true;
        cout << size << ": [";
        for (auto item : words)
        {
            if (!is_first)
            {
                cout << ", ";
            }
            is_first = false;
            cout << "\"" << item << '"';
        }
        cout << "]" << endl;
    }
}

int main()
{
    test();
    return 0;
}