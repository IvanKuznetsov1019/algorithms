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
___