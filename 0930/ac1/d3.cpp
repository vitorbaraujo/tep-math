#include <iostream>

using namespace std;
using ll = long long;

ll sum(int n){
    return n * (n + 1) / 2;
}

int main(){
    int n;
    int x = 1;

    while(scanf("%d", &n), n){
        ll s = 6 * sum(n/6 - 1) + 1;

        if(n%6 != 0){
            ll div = n / 6;
            ll mod = n % 6;
            s += (mod - 1) * div + div - 1;
        }

        printf("Case %d: %lld\n", x++, s);
    }

    return 0;
}
