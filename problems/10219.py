import fileinput
from math import *
from math import factorial as f

for line in fileinput.input():
    a, b = [int(x) for x in line.split()]

    res = 0
    for i in range(b):
        res += log10(a-i) - log10(i+1)

    print('{}'.format(floor(res) + 1))

