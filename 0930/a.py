import fileinput as f

fib = [0,1]
fib2 = [1]

for i in range(2, 5010):
    fib.append(fib[i-1] + fib[i-2])
    if not (i & 1):
        fib2.append(fib[i])

for line in f.input():
    i = int(line)
    if i == 0:
        break

    print(fib2[i]) 
