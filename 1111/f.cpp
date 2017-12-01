#include <bits/stdc++.h>

using namespace std;
using ll = long long;

map<ll,string> m;

string f(ll n){
    if(m[n].size() > 0) return m[n];
    if(n < 10) return to_string(n);
    string ans = "999999999999999999";
    for(int i=2;i<=9;i++){
        if(n%i == 0){
            ans = min(ans, to_string(i) + f(n/i));
        }
    }

    return m[n] = ans;
}

int main(){
    int n;
    cin >> n;

    while(n--){
        ll a;
        cin >> a;
        m.clear();

        string res = f(a);
        ll mult= 1;
        for(auto c :  res)
            mult *= (c-'0');
        if(mult == a and a) cout << res << endl;
        else cout << -1 << endl;

    }

    return 0;
}

