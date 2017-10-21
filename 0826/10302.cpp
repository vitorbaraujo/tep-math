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
