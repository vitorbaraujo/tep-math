#include <iostream>
#include <cstring>

using namespace std;
using ll = long long;

int dp[300][5];
int N;

ll f(int i, int j){
    if(dp[i][j] != -1) return dp[i][j];
    if(i == N) return 1;
    if(i > N) return 0;

    int ans = f(i+2, 0) + f(i+2, 1) + f(i+1, 2);

    return dp[i][j] = ans;
}

int main(){
    while(cin >> N){
        memset(dp, -1, sizeof dp);
        printf("%lld\n", f(0,N));
    }
    
    return 0;
}
