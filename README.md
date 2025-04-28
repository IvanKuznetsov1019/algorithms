## 1 Plus One

Напишите функцию `plusOne`, которая принимает целое число, представленное в виде массива цифр `digits`, где `digits[i]` — это i-я цифра числа, увеличивает целое число на единицу и возвращает получившийся массив цифр. Цифры расположены от старшего разряда к младшему слева направо. Число не содержит ведущих нулей. 

Time Complexity: O(n)
Space Complexity: O(1)

Пример #1:
```C++
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
```

Пример #2:
```C++
Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
```

Пример #3:
```C++
Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
```

Решение:
```C++
vector<int> plusOne(vector<int>& digits) {
  ...
}
```

## 2 Longest Substring Without Repeating Characters

Напишите функцию `lengthOfLongestSubstring`, которая принимает строку и возвращает её самую длинную подстроку, не содержащую повторяющихся символов.

Time Complexity: O(n)
Space Complexity: O(m), m - количество уникальных символов

Пример #1:
```C++
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
```

Пример #2:
```C++
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

Пример #3:
```C++
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
```

Решение:
```C++
int lengthOfLongestSubstring(string& str) {
  ...
}
```
---

## 3 Two Sums

Напишите функцию `twoSum`, которая принимает массив целых чисел `nums` и целое число `target` и возвращает индексы двух чисел, которые в сумме дают `target`. Можете вернуть ответ в любом порядке.

Time Comlexity: O(n)
Space Complexity: O(n)

Пример #1:
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

Пример #2:
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

Пример #3:
```
Input: nums = [3,3], target = 6
Output: [0,1]
```

Решение:
```C++
vector<int> twoSum(vector<int>& nums, int target) {
  ...
}
```
---

## 4 Sliding Window Average

Напишите функцию `slidingWindowAverage`, которая принимает массив целых чисел `nums` и размер окна `k` и возвращает массив средних значений от чисел из `nums`, которые попадают в окно по мере его движения вдоль массива `nums`.

Time Comlexity: O(n)
Space Complexity: O(n)

Пример #1:
```
Input: nums = [1, 3, 5, 7, 9], k = 3
Output: [3.0, 5.0, 7.0]
```

Пример #2:
```
Input: nums = [10, 20, 30, 40, 50], k = 2
Output: [15.0, 25.0, 35.0, 45.0]
```

Пример #3:
```
Input: nums = [5, 10, 15], k = 1
Output: [5.0, 10.0, 15.0]
```

Решение:
```C++
int slidingWindowAverage(vector<int>& nums, int k) {
  ...
}
```

---

## 5 Remove Duplicates, Keep Order

Напишите функцию `removeDuplicatesKeepOrder`, которая принимает массив целых чисел `nums` и удаляет все дубликаты, сохраняя при этом порядок следования чисел.

Time Comlexity: O(n)
Space Complexity: O(n)

Пример #1:
```
Input: nums = [1, 6, 2, 2, 0]
Output: [1, 6, 2, 0]
```

Пример #2:
```
Input: nums = [5, 5, 5, 5, 5]
Output: [5]
```

Пример #3:
```
Input: nums = [10, 3, 1, 1, 10, 1, 3]
Output: [10, 3, 1]
```

Решение:
```C++
int removeDuplicatesKeepOrder(vector<int>& nums) {
  ...
}
```

---

## 6 Queue Serving

Необходимо реализовать класс `Queue` управления очередью клиентов, которые должны быть обслужаны в порядке их появления в очереди. Каждый клиент представлен структурой `Client` с полями `id` - идентификатор клиента и `rating` - рейтинг клиента в данном заведении от 0.00 включительно до 5.00 включительно.

Для класса `Queue` необходимо реализовать следующие методы:

1. Метод `addClient` должен добавлять клиента с данным идентификатором и рейтингом;
2. Метод `serveClient` должен удалять первого клиента в очереди;
3. Метод `checkQueue` должен удалять всех клиентов из очереди, у которых рейтинг в заведении ниже 2.50, но выше 0.00.

```C++
struct Client {
  Client(int id, int rating) {}
  int id;
  int rating;
};

class Queue {
public:
  // Добавление клиента в очередь
  void addClient(int id, int waitTime) {...}
  // Обслуживание первого клиента
  void serveClient() {...}
  // Проверка очереди и удаление клиентов с низким рейтингом
  void checkQueue() {...}
private:
    ??? clients;
};
```

Пример:
```C++
Queue queue;
queue.addClient(1, 4.38);
queue.addClient(2, 1.20);
queue.addClient(3, 5.00);
queue.checkQueue(); // вывод: [1, 3]
queue.serveClient(); // вывод: 1
queue.checkQueue(); // вывод: [3]
```
---

## 7 Group Words By Length

Напишите функцию `groupWordsByLength`, которая принимает массив строк (слов) `words` и возвращает массив пар, где первый элемент пары - длина слова, второй элемент пары - массив слов с соотвествующей длиной.

Time Comlexity: O(n • log(n))
Space Complexity: O(n)

Пример:
```C++
vector<string> words = {"apple", "bat", "car", "banana", "dog", "ant"};
auto result = groupWordsByLength(words);

// Вывод:
// 3: ["bat", "car"]
// 5: ["apple", "banana"]
// 3: ["dog"]
// 2: ["ant"]
```

Решение
```C++
vector<pair<int, vector<string>>> groupWordsByLength(vector<string>& words) {
  ...
}
```
---
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