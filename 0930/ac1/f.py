import fileinput

def f(i, j):
    if dp[i][j] != -1:
        return dp[i][j]
    if i == n:
        return 1
    if i > n:
        return 0

    dp[i][j] = f(i+2,0) + f(i+2,1) + f(i+1,2)
    return dp[i][j]

for line in fileinput.input():
    global dp
    global n
    dp = [[-1 for i in range(270)] for j in range(270)]
    n = int(line.strip())

    print('{}'.format(f(0,n)))

