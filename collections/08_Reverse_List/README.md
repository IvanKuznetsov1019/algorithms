## 8 Reverse Linked List

**Задача не на коллекции, но надо знать как её решать!**

Напишите функцию `reverseList`, которая принимает указатель `head` на начало односвязного списка и возвращает указатель на начало развернутого списка.

Пример #1:

```
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
```

Пример #2:

```
Input: head = []
Output: []
```

Решение:

```C++
/*
Definition for singly-linked list.
  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
*/

ListNode* reverseList(ListNode* head) {
  ...
}
```
---