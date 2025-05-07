#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void test();
int findKthLargest(vector<int>& nums, int k);

int main() {
  test();
  return 0;
}

void test() {
  vector<int> testVector;
  int k;
  k = 2;
  testVector = {3, 2, 1, 5, 6, 4};
  cout << "ans: " << findKthLargest(testVector, k) << endl;
  k = 4;
  testVector = {3, 2, 3, 1, 2, 4, 5, 5, 6};
  cout << "ans: " << findKthLargest(testVector, k) << endl;
  k = 6;
  testVector = {3, 2, 1, 5, 6, 4};
  cout << "ans: " << findKthLargest(testVector, k) << endl;
}

int findKthLargest(vector<int>& nums, int k) {
  priority_queue<int, vector<int>, greater<int>> kLargestNums;

  for (int i = 0; i < k; i++) {
    kLargestNums.push(nums[i]);
  }
  for (int i = k; i < nums.size(); i++) {
    if (kLargestNums.top() < nums[i]) {
      kLargestNums.pop();
      kLargestNums.push(nums[i]);
    }
  }
  return kLargestNums.top();
}