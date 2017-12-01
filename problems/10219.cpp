#include <bits/stdc++.h>

using namespace std;
using ll = long long;

double f(double a){
    return log(a)/log(10);
}

int main(){
    ll a, b;

    while(scanf("%lld %lld", &a, &b) != EOF){
        double res = 0;
        for(int i=0;i<b;i++)
            res += log10(a-i) - log10(i+1);

        ll r = floor(res) + 1;
        printf("%lld\n", r);
    }

    return 0;
}
