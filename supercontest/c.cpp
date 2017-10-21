#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    ll a, b, n;

    while(scanf("%lld %lld %lld", &a, &b, &n) != EOF){
        if(a == -1 and b == -1 and n == -1) break;


        int na = a ? floor(log10(a) + 1) : 1;
        int nb = b ? floor(log10(b) + 1) : 1;
        int nn = n ? floor(log10(n) + 1) : 1;

        if(nn > nb){
            printf("0\n");
            continue;
        }

        ll res = 1;
        for(int i=nn + 1;i<=nb;i++){
             
        }
    }

    return 0;
}
