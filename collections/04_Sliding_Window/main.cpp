#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

vector<float> slidingWindowAverage(vector<int> &nums, int k);
void test();

int main() {
  test();
  return 0;
}

vector<float> slidingWindowAverage(vector<int> &nums, int k) {
  float sum3 = 0;
  vector<float> averagesSequence;
  for (int i = 0; i < k; i++) {
    sum3 += nums[i];
  }
  averagesSequence.push_back(sum3 / k);
  for (int i = k; i < nums.size(); i++) {
    sum3 += nums[i];
    sum3 -= nums[i - k];
    averagesSequence.push_back(sum3 / k);
  }
  return averagesSequence;
}

void test() {
  cout << fixed << setprecision(1);
  vector<float> result;
  vector<int> data;
  int winWidth;
  data = {1, 3, 5, 7, 9};
  winWidth = 3;
  result = slidingWindowAverage(data, winWidth);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;
  data = {10, 20, 30, 40, 50};
  winWidth = 2;
  result = slidingWindowAverage(data, winWidth);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;
  data = {5, 10, 15};
  winWidth = 1;
  result = slidingWindowAverage(data, winWidth);
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;
}
