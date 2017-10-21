#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int N;
ll fib[55];
double dp[1010][1010];
double memo[1010];

int next_fib(int val){
    for(int i=1;i<=19;i++)
        if(fib[i+1] > val)
            return fib[i+1];
    return -1000;
}

double f(int n, int m){
    if(dp[n][m] != -1) return dp[n][m];
    if(n == 0){
        return -N*1.6;
    }
    if(m == 0){
        return 100000000.0;
    }

    double ans = fabs(f(n, m-1));
    cout << "ans: " << ans << endl;

    if(n-m >= 0){
        double take = fabs(next_fib(m) + f(n-m, m));
        cout << "take: " << take << endl;

        ans = min(ans, take);
    }

    return dp[n][m] = ans;
}

int main(){

    for(int i=1;i<=10;i++){
        N = i;
        memo[N] = f(N,N);
    }

    fib[0] = 0;
    fib[1] = 1;
    for(int i=2;i<=20;i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    while(scanf("%d", &N), N){
        memset(dp, -1, sizeof dp);
        //ll res = f(N, N);
        double res = f(N, N);
        cout << res << endl;

        //printf("%lld.%lld\n", res/10, res%10 * 10);
    }

    return 0;
}
