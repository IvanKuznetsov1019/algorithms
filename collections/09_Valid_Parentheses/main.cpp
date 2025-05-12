#include <iostream>
#include <stack>

using namespace std;

bool isValidParentheses(string& str) {
  stack<char> openingParenthesis;
  for (const char item : str) {
    if ((item == ')' && openingParenthesis.top() == '(') ||
        (item == ']' && openingParenthesis.top() == '[') ||
        (item == '}' && openingParenthesis.top() == '{')) {
      openingParenthesis.pop();
    } else {
      openingParenthesis.push(item);
    }
  }
  if (openingParenthesis.empty()) {
    return true;
  }
  return false;
}

void test() {
  string str;
  str = "()";
  cout << "for str = \"()\" isValid = " << isValidParentheses(str) << endl;
  str = "()[]{}";
  cout << "for str = \"()[]{}\" isValid = " << isValidParentheses(str) << endl;
  str = "(]";
  cout << "for str = \"(]\" isValid = " << isValidParentheses(str) << endl;
  str = "([])";
  cout << "for str = \"([])\" isValid = " << isValidParentheses(str) << endl;
  str = "({}[][](){})[]{()([])}";
  cout << "for str = \"({}[][](){})[]{()([])}\" isValid = "
       << isValidParentheses(str) << endl;
  str = "({}[}][](){})[]{()([])}";
  cout << "for str = \"({}[}][](){})[]{()([])}\" isValid = "
       << isValidParentheses(str) << endl;
}

int main() {
  test();
  return 0;
}