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
