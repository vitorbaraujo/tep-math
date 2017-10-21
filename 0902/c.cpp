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
