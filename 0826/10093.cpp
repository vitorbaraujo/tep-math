#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

int main(){
    string s;

    while(cin >> s){
        int maxi = 1;
        for(auto c : s) maxi = max(maxi, (int)digits.find(c));

        bool ok = false;
        for(int i=maxi+1;i<=digits.size();i++){
            ll sum = 0;
            for(auto t : s){
                auto d = digits.find(t);
                if(d != string::npos) sum += d;
            }

            if(sum%(i-1) == 0){
                printf("%d\n", i);
                ok = true;
            }
            if(ok) break;
        }

        if(not ok) printf("such number is impossible!\n");
    }

    return 0;
}
