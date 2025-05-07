#include <iostream>
#include <stack>

using namespace std;

void test();

bool isValidParentheses(string& str);

int main() {
  test();
  return 0;
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

bool isValidParentheses(string& str) {
  stack<char> openingParenthesis;
  for (const char& item : str) {
    if (item == ')') {
      if (openingParenthesis.top() == '(') {
        openingParenthesis.pop();
      } else {
        break;
      }
    } else if (item == ']') {
      if (openingParenthesis.top() == '[') {
        openingParenthesis.pop();
      } else {
        break;
      }
    } else if (item == '}') {
      if (openingParenthesis.top() == '{') {
        openingParenthesis.pop();
      } else {
        break;
      }
    } else {
      openingParenthesis.push(item);
    }
  }
  if (openingParenthesis.empty()) {
    return true;
  }
  return false;
}