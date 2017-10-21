import fileinput

c = int(input())

def f(i, mask):
    rmask = int(str(mask)[::-1])

    if (i in dp.keys() and mask in dp[i].keys()) or\
        (i in dp.keys() and rmask in dp[i].keys()):
        return dp[i][mask]

    if i == n and len(str(mask)) == n:
        return 1

    if i > n:
        return 0

    ans = 0
    ans += f(i + 1, mask * 10 + 1)
    ans += f(i + 2, mask * 100 + 22)
    ans += f(i + 2, mask * 100)

    if not i in dp.keys():
        dp[i] = {}

    dp[i][mask] = ans
    dp[i][rmask] = ans

    return ans

for i in range(c):
    global dp
    global n
    dp = {}
    n = int(input().strip())

    print('{}'.format(f(0,0) - 1))

