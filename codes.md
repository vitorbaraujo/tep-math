# Codes

### Cantor Fractions
``` c++
#include <bits/stdc++.h>
#define MAX INT_MAX

using namespace std;
using ll = long long;

ll bb(ll low, ll high, int val){
    while(low <= high){
        ll mid = (low + high) / 2;
        ll sum = (mid * (mid + 1)) / 2;

        if(sum < val) low = mid + 1;
        else high = mid - 1;
    }

    return low;
}

inline ll sum(ll val){ return (val * (val + 1)) / 2;}

int main(){
    int n;

    while(scanf("%d", &n) != EOF){
        int idx = bb(1, MAX, n);
        ll diff = sum(idx) - n;
        printf("%lld/%lld\n", diff + 1, idx - diff);
    }

    return 0;
}
```

###The ? 1 ? 2 ? ... ? n = k problem
```c++
#include <bits/stdc++.h>
#define MAX 1000000000

using namespace std;
using ll = long long;

ll bb(int low, int high, int val){
    while(low <= high){
        ll mid = (low + high) / 2;
        ll sum = (mid * (mid + 1)) / 2;

        if(sum < val) low = mid + 1;
        else high = mid - 1;
    }

    return low;
}

int main(){
    int n;
    scanf("%d\n", &n);

    for(int x=0;x<n;x++){
        int k;
        if(x) getchar();
        scanf("%d", &k);

        ll idx = bb(1, MAX, abs(k));
        ll sum = (idx * (idx + 1)) / 2;

        while(sum % 2 != abs(k) % 2){ // mesma paridade
            idx++;
            sum = (idx * (idx + 1)) / 2;
        }

        if(x) printf("\n");
        printf("%lld\n", idx);
    }

    return 0;
}
```

### Heads
```c++
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;

    cin >> k;
    while(k--){
        scanf("%d", &n);
        double y = - (n * log10(2) + 1);
        double x = y - (int)y;
        printf("2^-%d = %.3fE%d\n", n, 10 * pow(10, x), int(y));
    }

    return 0;
}
```

### Self numbers
```c++
#include <bits/stdc++.h>

using namespace std;

int v[1000010];

int main(){
    for(int i=1;i<=1000000;i++){
        if(not v[i]) printf("%d\n", i);
        int sum = i;
        int nn = i;
        while(nn){
            sum += nn%10;
            nn /= 10;
        }
        if(sum <= 1000000) v[sum] = 1;
    }

    return 0;
}
```

### Kaprekar numbers
```c++
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isk(int n){
    ll pot = n * n;
    int base = 10;
    int a = pot % base, b = pot / base;

    while(b){
        if(a + b == n && a) return true;
        base *= 10;
        a = pot % base;
        b = pot / base;
    }

    return false;
}

int main(){
    vector<int> v;

    for(int i=2;i<=40000;i++) if(isk(i)) v.push_back(i);

    int k;
    cin >> k;

    int x = 1;
    while(k--){
        int a, b;
        scanf("%d %d", &a, &b);

        if(x-1) printf("\n");
        printf("case #%d\n", x++);
        int idx = lower_bound(v.begin(), v.end(), a) - v.begin();
        bool ok = false;
        for(int i=idx;v[i] <= b && i < v.size();i++){
            printf("%d\n", v[i]);
            ok = true;
        }
        if(not ok) printf("no kaprekar numbers\n");
    }

    return 0;
}
```

### An easy problem

*  A soma dos digitos de um número na base B é divisível por B-1
```c++
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int main(){
    string s;

    while(cin >> s){
        int maxi = 1;
        for(auto c : s) maxi = max(maxi, (int)digits.find(c));

        bool ok = false;
        for(int i=maxi+1;i<=digits.size();i++){
            ll sum = 0;
            for(auto t : s){
                auto d = digits.find(t);
                if(d != string::npos) sum += d;
            }

            if(sum%(i-1) == 0){
                printf("%d\n", i);
                ok = true;
            }
            if(ok) break;
        }

        if(not ok) printf("such number is impossible!\n");
    }

    return 0;
}

```

### Summation of polynomials

* Soma dos n primeiros cubos

```c++
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n;

    while(scanf("%lld", &n) != EOF){
        unsigned ll res = (n * n + n) * (n * n + n) / 4;
        printf("%llu\n", res);
    }

    return 0;
}
```

### Best compression ever

```c++
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll a, b;

    while(scanf("%lld %lld", &a, &b) != EOF){
        long long pot = (1LL << (b+1)) - 1;
        printf("%s\n", a <= (pot)? "yes" : "no");
    }

    return 0;
}
```

### Overflow

``` c++
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
```


### Automorphic numbers

``` c++
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

```

### Bees' ancestors

``` c++
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll fib[100];

    fib[0] = 1;
    fib[1] = 1;

    for(int i=2;i<=80;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    int a;
    while(scanf("%d", &a), a){
        printf("%lld\n", fib[a]);
    }

    return 0;
}

```

### The Bases Are Loaded

``` c++
#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
    int to, from;
    char ss[15];

    const string digits = "0123456789ABCDEF";

    while(scanf("%d %d %s", &from, &to, ss) != EOF){
        int maxi = -1;
        ll res = 0;
        for(int i=0;i<strlen(ss);i++){
            char c = ss[i];
            int ff = digits.find(c);
            if(ff == string::npos){
                maxi = from + 1;
                break;
            }
            res *= from;
            res += ff;
            maxi = max(maxi, (int)ff);
        }

        if(maxi >= from){
            printf("%s is an illegal base %d number\n", ss, from);
            continue;
        }


        ll aux = res;

        string tos = "";

        do{
            int diff = aux % to;
            tos += digits[diff];
            aux /= to;
        }while(aux);

        reverse(tos.begin(), tos.end());
        printf("%s base %d = %s base %d\n", ss, from, tos.c_str(), to);
    }

    return 0;
}

```

### Prime Words

``` c++
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isp(int num){
    int count = 0;
    for(int i=1;i<=num/2;i++){
        if(num%i == 0) count++;
    }

    count++;

    return num == 1 || count == 2;
}

int main(){
    const string digits = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string s;

    while(cin >> s){
        ll sum = 0;
        for(auto c : s){
            sum += digits.find(c) + 1;
        }

        if(isp(sum)) cout << "It is a prime word." << endl;
        else cout << "It is not a prime word." << endl;
    }

    return 0;
}
```
