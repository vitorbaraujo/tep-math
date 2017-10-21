#include <bits/stdc++.h>
#define MAX INT_MAX

using namespace std;
using ll = long long;

ll bb(ll low, ll high, int val){
    while(low <= high){
        ll mid = (low + high) / 2;
        ll sum = (mid * (mid + 1)) / 2;

        if(sum < val) low = mid + 1;
        else high = mid - 1;
    }

    return low;
}

inline ll sum(ll val){ return (val * (val + 1)) / 2;}

int main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        int idx = bb(1, MAX, n); 
        ll diff = sum(idx) - n;
        printf("%lld/%lld\n", diff + 1, idx - diff);
    }

    return 0;
}
