#include <iostream>
#include <map>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

vector<pair<int, vector<string>>> groupWordsByLength(vector<string> &words) {
  map<int, vector<string>> SizesAndWords;
  for (const auto &word : words) {
    SizesAndWords[word.size()].push_back(word);
  }
  vector<pair<int, vector<string>>> result;
  for (const auto &item : SizesAndWords) {
    result.push_back(item);
  }
  return result;
}

void test() {
  vector<string> words = {"apple", "bat", "car", "banana", "dog", "ant"};
  auto result = groupWordsByLength(words);

  for (const auto &[size, words] : result) {
    bool isFirst = true;
    cout << size << ": [";
    for (auto item : words) {
      if (!isFirst) {
        cout << ", ";
      }
      isFirst = false;
      cout << "\"" << item << '"';
    }
    cout << "]" << endl;
  }
}

int main() {
  test();
  return 0;
}