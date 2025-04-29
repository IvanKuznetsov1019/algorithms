#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *reverseList(ListNode *head) {
  ListNode *nextNode = nullptr;
  ListNode *currentNode = head;
  ListNode *pastNode = nullptr;

  while (currentNode != nullptr) {
    nextNode = currentNode->next;
    currentNode->next = pastNode;
    pastNode = currentNode;
    currentNode = nextNode;
  }

  return pastNode;
}

void test() {
  ListNode l5(5);
  ListNode l4(4, &l5);
  ListNode l3(3, &l4);
  ListNode l2(2, &l3);
  ListNode l1(1, &l2);

  ListNode *l = &l1;

  while (l != nullptr) {
    cout << l->val << "  ";
    l = l->next;
  }

  cout << endl;
  cout << "-------------";
  cout << endl;

  l = reverseList(&l1);

  while (l != nullptr) {
    cout << l->val << "  ";
    l = l->next;
  }
}

int main() {
  test();
  return 0;
}