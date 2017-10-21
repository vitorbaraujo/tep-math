import fileinput

def d(n):
    if(dp[n] != -1):
        return dp[n]
    if(n == 1):
        return 0
    if(n == 2):
        return 1

    dp[n] = (n-1) * (d(n-1) + d(n-2))
    return dp[n] 

global dp
dp = [-1 for i in range(900)]

for line in fileinput.input():
    n = int(line.strip())

    if n == -1:
        break

    print(d(n))
