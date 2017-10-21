#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

int n;
map<ii, int> dp;

int f(int c, int b){
    if(dp.find(ii(c,b)) != dp.end()) return 0;
    if(b >= c or (n-c-b) >= b or (n-c-b) >= c) return 0;

    int a = n-c-b;
    int ans = 1;

    if(a < b and a < c){
        if(c-1 > b+1)
            ans += f(c-1, b+1);
        if(c-2 > b+1)
            ans += f(c-2, b+1);
    }

    return dp[ii(c,b)] = ans; 
}

int main(){
    while(cin >> n, n){
        int count = 0;

        for(int c=3;c<=n;c++){
            for(int b=2;b<c;b++){
                if(n-b-c < b and n-b-c > 0){
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
