import fileinput

for n in fileinput.input():
    s = n.strip()
    a = int(n)
    x = str(a ** 2)

    quad = x[:-len(s)-1:-1]
    inv = s[::-1]

    if quad == inv and a != 0 and a != 1:
        print('Automorphic number of %s-digit.' % len(s))
    else:
        print('Not an Automorphic number.')
