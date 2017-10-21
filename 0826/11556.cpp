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
