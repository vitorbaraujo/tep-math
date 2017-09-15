#include <bits/stdc++.h>
#define MAX 1000000000

using namespace std;
using ll = long long;

ll bb(int low, int high, int val){
    while(low <= high){
        ll mid = (low + high) / 2;
        ll sum = (mid * (mid + 1)) / 2;

        if(sum < val) low = mid + 1;
        else high = mid - 1;
    }

    return low;
}

int main(){
    int n;
    scanf("%d\n", &n);

    for(int x=0;x<n;x++){
        int k;
        if(x) getchar();
        scanf("%d", &k);
        
        ll idx = bb(1, MAX, abs(k));
        ll sum = (idx * (idx + 1)) / 2;

        //cout << "k: " << k << ", idx: " << idx << endl;
        
        while(sum % 2 != abs(k) % 2){
            idx++;
            sum = (idx * (idx + 1)) / 2;
        }

        if(x) printf("\n");
        printf("%lld\n", idx);
    }

    return 0;
}
