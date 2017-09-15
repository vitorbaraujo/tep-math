#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool isp(int num){
int count = 0;
    for(int i=1;i<=num/2;i++){
        if(num%i == 0) count++;
    }

    count++;

    return num == 1 || count == 2;
}

int main(){
    const string digits = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    string s;

    while(cin >> s){
        ll sum = 0;
        for(auto c : s){
            sum += digits.find(c) + 1;
        }

        if(isp(sum)) cout << "It is a prime word." << endl;
        else cout << "It is not a prime word." << endl;
    }

    return 0;
}
