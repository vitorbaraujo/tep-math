import fileinput as f

for line in f.input():
    a, b = [int(x) for x in line.split()]

    if a == 0 and b == 0:
        break

    print(a**b)
