#include <cmath>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void test();
bool isHappy(int n);
int happyNumberIteration(int n);

int main() {
  test();
  return 0;
}

void test() {
  cout << "n = 0, ans = " << isHappy(0) << endl;
  cout << "n = 1, ans = " << isHappy(1) << endl;
  cout << "n = 19, ans = " << isHappy(19) << endl;
  cout << "n = 2, ans = " << isHappy(2) << endl;
  cout << "n = 12345, ans = " << isHappy(12345) << endl;
}

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
  bool isRepeat = false;
  bool isHappy = false;
  while (!isRepeat) {
    nums.insert(n);
    n = happyNumberIteration(n);

    if (n == 1) {
      isHappy = true;
      break;
    }
    if (nums.find(n) != nums.end()) {
      isRepeat = true;
    }
  }
  return isHappy;
}
