#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll fast_exp(ll a, ll n, ll m){
  ll res = 1, base = a;

  while(n){
    if(n & 1){ // se impar
      res *= base;
      res %= m;
    }
    base *= base;
    base %= m;
    n /= 2;
  }

  return res;
}

void f(int n){
  int B = 10;
  int n_dig = floor(log10(n) + 1) - 1;
  cout << "n_dig = " << n_dig << endl;
  cout << n << endl;
  while(n_dig--){
    int a = n / B;
    int b = n % B;
    cout << a << " " << b << endl;
    B *= 10;
  }
}


int main(){
  cout << fast_exp(2, 300000000, 10000000) << endl;

  return 0;
}
