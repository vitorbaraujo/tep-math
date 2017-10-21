#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ii = pair<ll, ll>;

int n;

ll dp2[50], dp3[50];

ll f2(int i){
    if(i < 0) return 0;
    if(i == 0 || i == 1) return 1;
    if(i == 2) return 3;

    return f2(i-2) + f2(i-4) * 2;
}

ll f3(int i){
    if(i == 0 || i == 1) return 1;
    if(i == 2) return 3;
    return f3(i-1) + 2*f3(i-2);
}

int main(){
    int k;
    cin >> k;

    memset(dp2, -1, sizeof dp2);
    memset(dp3, -1, sizeof dp3);
    while(k--){
        scanf("%d", &n);

        ll a = f2(n);
        ll b = f3(n);
        cout << a + (b-a)/2 << endl;
    }

    return 0;
}
