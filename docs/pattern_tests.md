# Модуль quadeq


## Метод twoRoot
### Тест №1
>Цель: Проверить уравнение с 2 корнями
>Входные данные: a = 1, b = 2, c = -3
>Ожидаемый результат: x = [1, -3], code = 2

### Тест №2
>Цель: Проверить уравнение с 2 корнями
>Входные данные: a = 2, b = -2, c = -12
>Ожидаемый результат: x = [-2, 3], code = 2

### Тест №3
>Цель: Проверить уравнение с 2 корнями
>Входные данные: a = -6, b = 3, c = 18
>Ожидаемый результат: x = [-1.5, 2], code = 2


## Метод oneRoot
### Тест №1
>Цель: Проверить уравнение с 1 корнем
>Входные данные: a = 2.5, b = -5, c = 2.5
>Ожидаемый результат: x = [1], code = 1

### Тест №2
>Цель: Проверить уравнение с 1 корнем
>Входные данные: a = 2, b = 4, c = 2
>Ожидаемый результат: x = [-1], code = 1


## Метод zeroRoot
### Тест №1
>Цель: Проверить уравнение без решений
>Входные данные: a = 10, b = 6, c = 4
>Ожидаемый результат: x = [], code = 0

### Тест №2
>Цель: Проверить уравнение без решений
>Входные данные: a = -5, b = 7, c = -2.5
>Ожидаемый результат: x = [], code = 0


## Метод incorrect
### Тест №1
>Цель: Проверить обработку не квадратных уравнений
>Входные данные: a = 0, b = 1, c = -1
>Ожидаемый результат: code = -1


## Метод zeroBC
### Тест №1
>Цель: Проверить уравнение с нулевым b или c
>Входные данные: a = 4, b = 0, c = -81
>Ожидаемый результат: x = [-4.5, 4.5], code = 2

### Тест №2
>Цель: Проверить уравнение с нулевым b или c
>Входные данные: a = 9, b = 225, c = 0
>Ожидаемый результат: x = [-25, 0], code = 2

### Тест №3
>Цель: Проверить уравнение с нулевым b или c
>Входные данные: a = 42, b = 0, c = 0
>Ожидаемый результат: x = [0], code = 1