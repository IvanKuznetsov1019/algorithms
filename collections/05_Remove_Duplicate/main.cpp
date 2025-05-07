#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void test();
vector<int> removeDuplicatesKeepOrder(vector<int>& nums);

int main() {
  test();
  return 0;
}

void test() {
  vector<int> data;
  vector<int> result;

  data = {1, 6, 2, 2, 0};
  result = removeDuplicatesKeepOrder(data);
  for (const int& item : result) {
    cout << item << ' ';
  }
  cout << endl;

  data = {5, 5, 5, 5, 5};
  result = removeDuplicatesKeepOrder(data);
  for (const int& item : result) {
    cout << item << ' ';
  }
  cout << endl;

  data = {10, 3, 1, 1, 10, 1, 3};
  result = removeDuplicatesKeepOrder(data);
  for (const int& item : result) {
    cout << item << ' ';
  }
  cout << endl;
}

vector<int> removeDuplicatesKeepOrder(vector<int>& nums) {
  unordered_set<int> uniqueElements;
  vector<int> resultSequence;
  for (const int& digit : nums) {
    if (uniqueElements.find(digit) == uniqueElements.end()) {
      resultSequence.push_back(digit);
      uniqueElements.insert(digit);
    }
  }
  return resultSequence;
}