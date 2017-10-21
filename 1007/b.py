from math import factorial as fat

def ways(n, fr, r, ll):
    nu = 0

    for i in fr:
        if i > 1:
            nu += 1

    uniq =  len(set(labels))
    res = fat(uniq) // (fat(r) * fat(uniq - r)) + nu

    return res

x = 1

while 1:
    n, m = [int(x) for x in input().split()]

    if n == 0:
        break

    fr = [0 for i in range(55)]

    labels = [int(x) for x in input().strip().split()]
    for i in labels:
        fr[i] += 1

    print('Case {}:'.format(x))
    x += 1
    queries = [int(x) for x in input().strip().split()]
    for q in queries:
        print(ways(n, fr, q, labels))
