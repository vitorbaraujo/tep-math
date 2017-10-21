#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int dp[120][120];
int m, n;

ll f(int i, int j){
    if(dp[i][j] != -1) return dp[i][j];

    if(i == m && j == n) return 1;
    if(i > m or j > n) return 0;

    return dp[i][j] = f(i,j+2) + f(i,j+1);
}

int main(){
    while(scanf("%d %d", &m, &n) != EOF){
        memset(dp, -1, sizeof dp);
        cout << f(0, 0) << endl;
    }

    return 0;
}
