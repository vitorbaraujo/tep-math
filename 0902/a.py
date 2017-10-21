import fileinput

for line in fileinput.input():
    INF = 2 ** 31

    a, op, b = line.split()

    print(line.strip())

    if int(a) >= INF:
        print('first number too big')

    if int(b) >= INF:
        print('second number too big')

    if op == '+' and int(a) + int(b) >= INF:
        print('result too big')
    elif op == '*' and int(a) * int(b) >= INF:
        print('result too big')
