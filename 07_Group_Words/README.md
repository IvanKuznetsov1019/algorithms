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