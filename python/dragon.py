import random
import time

def displayIntro():
    print(' Hello dear Player! You have to choose a cave. The first one is filled with gold. But in other one, a very hungry dragon will eat you. ')
    print()

def chooseCave():
    cave = ''
    while cave != '1' and cave != '2':
        print(' In wich cave you want to come in? (choose 1 or 2)')
        cave = input()

    return cave

def checkCave(chosenCave):
    print( 'you are near th ecave')
    time.sleep(2)
    print('there is so dark. very scary.')
    time.sleep(2)
    print()
    time.sleep(2)

    friendlyCave = random.randint(1,2)

    if chosenCave == str(friendlyCave):
        print('you are now rich')
    else:
        print('you are dead')

playAgain = 'yes'
while playAgain == 'yes' or playAgain == 'Y' or playAgain == 'y':
    displayIntro()
    caveNumber = chooseCave()
    checkCave(caveNumber)

    print('Do you want to try again? (Yes?)')
    playAgain = input()