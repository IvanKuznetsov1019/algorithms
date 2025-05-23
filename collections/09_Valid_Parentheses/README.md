## 9 Valid Parentheses

Напишите функцию `isValidParentheses`, которая принимает строку, содержащую только символы `(`, `)`, `{`, `}`, `[` и `]`, и проверяет, является ли строка допустимой (valid). Строка является допустимой при следующих условиях:

1. Открытая скобка должна быть закрыта скобкой того же типа;
2. Каждая закрытая скобка имеет соотвествующую открытую скобку того же типа;
3. Открытые скобки должны быть закрыты в математически правильном порядке.
 

Time Complexity: O(n)
Space Complexity: O(n)

Пример #1:
```cpp
Вход: s = "()"
Выход: true
```

Пример #2:
```cpp
Вход: s = "()[]{}"
Выход: true
```

Пример #3:
```cpp
Вход: s = "(]"
Выход: false
```

Пример #4:
```cpp
Вход: s = "([])"
Выход: true
```

Решение:
```cpp
bool isValidParentheses(string& str) {
  ...
}
```
