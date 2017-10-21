#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll comb(int a, int b){
    ll res = 1; 

    while(res){
        
    }
}

int mm[55];

int main(){
    int n, m;
    int x = 0;

    while(scanf("%d %d", &n, &m), n && m){
        memset(mm, 0, sizeof mm);
        vector<int> vv;
        for(int i=0;i<n;i++){
            int a;
            scanf("%d", &a);
            if(mm[a] == 0){
                vv.push_back(a);
                mm[a] = 1;
            }
        }

        printf("Case %d:\n", x++);
        for(int i=0;i<m;i++){
            int r;
            scanf("%d", &r);
            printf("%lld\n", comb(vv.size(), m));
        }
    }

    return 0;
}
