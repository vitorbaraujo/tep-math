#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mdc(ll a, ll b){
    return (!b) ? a : mdc(b,a%b);
}

int v[50];

int main(){
    int n;
    while(cin >> n, n){
        int a=0,b=0;
        for(int i=0;i<n;i++) scanf("%d", &v[i]);

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                a++;
                if(mdc(v[i],v[j]) == 1) b++;
            }
        }

        if (b) printf("%.6f\n", sqrt(6.0*a/b));
        else cout << "No estimate for this data set." << endl;
        
    }

    return 0;
}
