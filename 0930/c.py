import fileinput
from math import factorial as f

a = [1,1,2,5]

for j in range(4, 1010):
    res = 0
    for i in range(1, j + 1):
        res += (a[i-1] * a[j-i])
    a.append(res)

for line in fileinput.input():
    n = int(line)

    print(a[n])
