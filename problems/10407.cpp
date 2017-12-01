#include <bits/stdc++.h>
#define ll long long
#define MAX 10001000

using namespace std;

bool compare(ll a, ll b){
    return a > b;
}

int main(){
    int nf;

    while(cin >> nf, nf!=0){
        vector<int> ns;
        ns.push_back(nf);
        int a;
        while(cin >> a, a!=0){
            ns.push_back(a);
        }

        sort(ns.begin(), ns.end());

        ll res=1;

        for(ll i=ns[0];i>=1;i--){
            bool ok = true;
            int rem = ns[0]%i;
            for(auto n : ns){
                if(n%i != rem){
                    ok = false;
                    break;
                }
            }
            if(ok) res = i;
        }
        cout << res << endl;
    }

    return 0;
}
