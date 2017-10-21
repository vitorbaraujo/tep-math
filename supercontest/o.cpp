#include <bits/stdc++.h>

using namespace std;
using ll = long long;

double dp[110][15];
int k, n;

double f(int l, int e){
  if(dp[l][e] != 0) return dp[l][e];
  if(e < 0 or e > k) return 0;
  if(l == 1) return 1.0 / (k + 1);
  
  double ans = f(l-1, e) + f(l-1, e-1) + f(l-1, e+1);

  return dp[l][e] = ans / (k + 1);
}

int main(){
  while(scanf("%d %d", &k, &n) != EOF){
    double res = 0;

    for(int i=0;i<=k;i++){
      memset(dp, 0, sizeof dp);
      res += f(n, i);
    }

    printf("%.5f\n", res * 100.0);
  }

  return 0;
}
