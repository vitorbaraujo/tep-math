n = int(input())
line = 0

for i in range(0, n):
    input()
    y = int(input())

    low = 1
    high = -1
    if y == 1:
        high = 1;
    else:
        high = y // 2
    iter = 100

    while low < high or iter:
        x = (low + high) // 2

        if abs(x ** 2 - y) <= (10 ** -4):
            if line:
                print()
            print(int(x))
            break

        if x ** 2 > y:
            high = x - 1
        else:
            low = x + 1

        iter -= 1

    line += 1
