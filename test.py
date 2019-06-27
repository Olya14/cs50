import math as m
def func(paremeter):
    print(m.sqrt(paremeter) * m.pow(paremeter,2))

number = int(input('Enter the number: '))
print(number % 1000)
print(number % 100)
print(number % 10)

func(number)
