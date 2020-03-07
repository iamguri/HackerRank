#https://www.hackerrank.com/challenges/counting-valleys/problem

#!/bin/python3

import math
import os
import random
import re
import sys

n = int(input())
s = input()
count=0
level,prev_height=0,0
for i in range(n):
    if (s[i] == 'U'):
        level+=1
    elif s[i] == 'D':
        level-=1
    if level == 0 and prev_height<0:
        count += 1
    prev_height = level
print(count)
