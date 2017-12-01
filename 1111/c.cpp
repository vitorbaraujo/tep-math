#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int v[100];

ll mdc(ll a, ll b){ return (!b) ? a : mdc(b,a%b);}
ll mmc(ll a, ll b){
    return a * (b/mdc(a,b));
}

int main(){
    int n;

    cin >> n;

    int x=  1;
    while(n--){
        int a;
        cin >> a;
        ll sum = 0, mc = 1;
        for(int i=0;i<a;i++){
            scanf("%d", &v[i]);
            mc = mmc(mc, v[i]);
        }

        ll b = 0;
        for(int i=0;i<a;i++){
            b+=mc/v[i];
        }

        ll md = mdc(a*mc,b);
        printf("Case %d: %lld/%lld\n", x++, a*mc/md,b/md);
    }

    return 0;
}
