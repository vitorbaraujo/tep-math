#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int n, d;

ll f(int idx, int rem){
    if(rem == 0) return 1;

    ll ans = 0;

    for(int i=0;i<=rem;i++){
        if(idx < n && rem - i >= 0)
            ans += f(idx + 1, rem-i);
    }

    return ans;
}

int main(){
    int x;
    while(scanf("%d %d", &x, &d), n | d){
        ll res = 0;
        for(int i=0;i<=x;i++){
            for(int j=0;j<=d;j++){
                n = x;
                res += f(0, j);
            }
        }
        cout << res << endl;
    }

    return 0;
}
