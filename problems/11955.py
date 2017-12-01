n = int(input())

triangle = [[1], [1,1]]

for i in range(2, 51):
    row = [1]
    for j in range(1, i):
        row.append(triangle[i-1][j-1] + triangle[i-1][j])
    row.append(1)
    triangle.append(row)

for x in range(n):
    a, b, p = input().replace('(', ' ').replace(')', ' ').replace('+', ' ').replace('^', ' ').split()
    p = int(p)

    res = ''
    for idx, val in enumerate(triangle[p]):
        has = False
        if idx > 0:
            res += '+'
        if val > 1:
            res += str(val) + '*'
            has = True
        if p-idx > 0:
            res += str(a)
            if p-idx > 1:
                res += '^' + str(p-idx)
        if idx > 0:
            if has:
                res += '*'
            res += str(b)
            if idx > 1:
                res += '^' + str(idx)
    
    print('Case {}: {}'.format(x+1, res))
