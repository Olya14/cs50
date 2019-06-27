def getName ():
    name = input('Введите ваше имя: ')
    print('Привет "', name, '"', sep='')
    return name

def printName(name):
    for letter in name:
        print (letter)
# printName(getName())

def getNumber ():
    number = int(input('Введите число '))
    return number

def calculate (number):
    if number % 2 == 0:
        print (number * 2)
    else:
        print (number ** 3)
# calculate(getNumber())

while True:
    printName(getName())
    calculate(getNumber())

