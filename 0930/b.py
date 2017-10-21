import fileinput
from math import factorial as f

for line in fileinput.input():
    n, m = [int(x) for x in line.split()]
    
    if n == 0 and m == 0:
        break

    res = f(n) // (f(m) * f(n-m))
    print('{} things taken {} at a time is {} exactly.'.format(n, m, res)) 
