#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
    int n;
    int x = 1;
    
    while(scanf("%d", &n), n){
        ll res = 0;
        for(int a=1;a<=n;a++){
            int b = a + 1; 
            int c = n-a-b;

            if(b >= c) break; 

            res += (c-b)/2 + (c-b)%2;
        }

        printf("Case %d: %llu\n", x++, res);
    }

    return 0;
}
