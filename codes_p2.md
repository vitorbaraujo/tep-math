
### Combinations
```python
# C(n,m) = n!/(m! * (n-m)!)

import fileinput
from math import factorial as f

for line in fileinput.input():
    n, m = [int(x) for x in line.split()]

    if n == 0 and m == 0:
        break

    res = f(n) // (f(m) * f(n-m))
    print('{} things taken {} at a time is {} exactly.'.format(n, m, res))
```

### How many trees?
```python
import fileinput
from math import factorial as f

a = [1,1,2,5]

for j in range(4, 1010):
    res = 0
    for i in range(1, j + 1):
        res += (a[i-1] * a[j-i])
    a.append(res)

for line in fileinput.input():
    n = int(line)

    print(a[n])
```

### Connect the cable wires
```python
# fibonacci impares

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
```

### Tiling
```python
# f(i) = f(i-1) + 2 * f(i-2)

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
```

### Jimmy's balls
```c++
#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
    int n;
    int x = 1;

    while(scanf("%d", &n), n){
        ll res = 0;
        for(int a=1;a<=n;a++){
            int b = a + 1;
            int c = n-a-b;

            if(b >= c) break;

            res += (c-b)/2 + (c-b)%2;
        }

        printf("Case %d: %llu\n", x++, res);
    }

    return 0;
}
```

### Little nephew
```c++
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int a,b,c,d,e;

    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &e), a | b | c | d | e){
        printf("%lld\n", a*b*c*d*d*e*e*1LL);
    }

    return 0;
}
```

### Pascal's triangle
```python
l1 = [1]
l2 = [1,1]

def pr(l):
    s = ' '.join([str(x) for x in l])
    print(s)
    return s

pr(l1)
pr(l2)

while 1:
    l1 = l2
    temp = [1]
    for i in range(1, len(l1)):
        temp.append(l1[i] + l1[i-1])
    temp.append(1)
    pr(temp)
    l2 = temp
    if not all(i < 10**60 for i in l2):
        break
```

### Sweet child makes troubles
```python
# desarranjo ou permutação caótica
# d(n) = (n-1) * (d(n-1) + d(n-2))

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
```

### Combination! Once again
```c++
// combinações com elementos repetidos

#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int fr[100];
ll dp[60][60];
int n, m;

ll f(int rem, int idx){
    if(dp[rem][idx] != (unsigned long long)-1) return dp[rem][idx];
    if(rem == 0) return 1;

    ll ans = 0;
    for(int i=0;i<=fr[idx];i++){
        if(idx <= n && rem - i >= 0)
            ans += f(rem - i, idx + 1);
    }

    return dp[rem][idx] = ans;
}

int main(){
    int x = 1;

    while(scanf("%d %d", &n, &m), n){
        memset(fr, 0, sizeof fr);
        memset(dp, -1, sizeof dp);

        for(int i=0;i<n;i++){
            int a;
            scanf("%d", &a);
            fr[a]++;
        }

        printf("Case %d:\n", x++);
        for(int i=0;i<m;i++){
            int r;
            scanf("%d", &r);
            printf("%lld\n", f(r, 1));
        }
    }


    return 0;
}
```

### Tile code
```c++
// no. de combinações de peças que começam e terminam iguais
// - f2(i) = f2(i-2) + 2 * f2(i-4)
// no. de combinações
// - f3(i) = f3(i-1) + 2 * f2(i-2)

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n;

ll dp2[50], dp3[50];

ll f2(int i){
    if(i < 0) return 0;
    if(i == 0 || i == 1) return 1;
    if(i == 2) return 3;

    return f2(i-2) + f2(i-4) * 2;
}

ll f3(int i){
    if(i == 0 || i == 1) return 1;
    if(i == 2) return 3;
    return f3(i-1) + 2*f3(i-2);
}

int main(){
    int k;
    cin >> k;

    memset(dp2, -1, sizeof dp2);
    memset(dp3, -1, sizeof dp3);
    while(k--){
        scanf("%d", &n);

        ll a = f2(n);
        ll b = f3(n);
        cout << a + (b-a)/2 << endl;
    }

    return 0;
}
```

### Tight words
```c++
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

double dp[110][15];
int k, n;

double f(int l, int e){
  if(dp[l][e] != 0) return dp[l][e];
  if(e < 0 or e > k) return 0;
  if(l == 1) return 1.0 / (k + 1);

  double ans = f(l-1, e) + f(l-1, e-1) + f(l-1, e+1);

  return dp[l][e] = ans / (k + 1);
}

int main(){
  while(scanf("%d %d", &k, &n) != EOF){
    double res = 0;

    for(int i=0;i<=k;i++){
      memset(dp, 0, sizeof dp);
      res += f(n, i);
    }

    printf("%.5f\n", res * 100.0);
  }

  return 0;
}
```
