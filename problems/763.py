fib = [1,1]
for i in range(2, 110):
    fib.append(fib[i-1] + fib[i-2])

def gf(n):
    res = ''
    for i in fib[:0:-1]: 
        if n >= i:
            res += '1'
            n -= i
        else:
            res += '0'
    return res

def parse(n):
    res = 0
    for idx, val in enumerate(list(str(n)[::-1])):
        if val == '1':
            res += fib[int(idx+1)]
    return res

import fileinput as f

lines = [line.strip() for line in f.input() if line.strip()]

idx = 0
for i in range(len(lines)//2):
    a = lines[idx]
    b = lines[idx+1]

    if idx > 0:
        print()
    print(int(gf(parse(a) + parse(b))))

    idx += 2
