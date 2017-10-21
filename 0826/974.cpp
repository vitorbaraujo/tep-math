#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isk(int n){
    ll pot = n * n; 
    int base = 10;
    int a = pot % base, b = pot / base;
    
    while(b){
        if(a + b == n && a) return true;
        base *= 10;
        a = pot % base;
        b = pot / base;
    }

    return false;
}

int main(){
    vector<int> v;

    for(int i=2;i<=40000;i++) if(isk(i)) v.push_back(i);

    int k;
    cin >> k;

    int x = 1;
    while(k--){
        int a, b;
        scanf("%d %d", &a, &b);

        if(x-1) printf("\n");
        printf("case #%d\n", x++);
        int idx = lower_bound(v.begin(), v.end(), a) - v.begin();
        bool ok = false;
        for(int i=idx;v[i] <= b && i < v.size();i++){
            printf("%d\n", v[i]);
            ok = true;
        }
        if(not ok) printf("no kaprekar numbers\n");
    }

    return 0;
}
