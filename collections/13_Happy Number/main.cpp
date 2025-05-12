#include <cmath>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int happyNumberIteration(int n) {
  int result = 0;
  while (n != 0) {
    result += pow((n % 10), 2);
    n /= 10;
  }
  return result;
}

bool isHappy(int n) {
  set<int> nums;
  while (true) {
    nums.insert(n);
    n = happyNumberIteration(n);
    if (n == 1) {
      return true;
    }
    if (nums.find(n) != nums.end()) {
      return false;
    }
  }
}

void test() {
  cout << "n = 0, ans = " << isHappy(0) << endl;
  cout << "n = 1, ans = " << isHappy(1) << endl;
  cout << "n = 19, ans = " << isHappy(19) << endl;
  cout << "n = 2, ans = " << isHappy(2) << endl;
  cout << "n = 12345, ans = " << isHappy(12345) << endl;
}

int main() {
  test();
  return 0;
}
