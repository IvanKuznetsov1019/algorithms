#include <iostream>
#include <map>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
  map<int, int> elementsCount;
  for (const int n : nums) {
    elementsCount[n]++;
  }  // nlog(n)

  int majorityElement;

  for (const auto& [element, quantity] : elementsCount) {
    if (quantity > nums.size() / 2) {
      majorityElement = element;
    }
  }  // n
  return majorityElement;
}  // n + nlog(n)

void test() {
  vector<int> testVector;
  testVector = {3, 2, 3};
  cout << majorityElement(testVector) << endl;
  testVector = {2, 2, 1, 1, 1, 2, 2};
  cout << majorityElement(testVector) << endl;
  testVector = {-1, 2, -1, 4, 5, -1, -2, 8, -1, 0, -1, -1, -1};
  cout << majorityElement(testVector) << endl;
}

int main() {
  test();
  return 0;
}
