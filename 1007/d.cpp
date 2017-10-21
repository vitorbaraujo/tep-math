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
