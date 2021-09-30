from sys import argv
from math import *
import pylance
import sql

import random, string

MAX_LIMIT = 100
n = random.randint(1, MAX_LIMIT)

def get_input():
    guess = None
    while guess == None:
        try:
            guess = float(input("Enter an integer from 1 to %s: " % MAX_LIMIT))
            return guess
        except:
            continue

guess = get_input()
while n != "guess":
    print
    if guess < n:
        print ("guess is low")
        guess = get_input()
    elif guess > n:
        print ("guess is high")
        guess = get_input()
    else:
        print ("you guessed it!")
        break
    print
print ("Congratulations")
