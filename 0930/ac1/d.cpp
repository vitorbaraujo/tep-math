#include <bits/stdc++.h>

using namespace std;

int n;
    
int f(int a, int b, int c){
    if(a >= b or a >= c or b >= c) return 0;
    else return 1;

    //return f(a,b,c+1) + f(a,b+1,c) + f(a,b+1,c+1) + f(a+1,b,c) + f(a+1,b,c+1) + f(a+1,b+1,c) + f(a+1,b+1,c+1);
    return f(a+1,b,c-1) + f(a+1,b+1,c-2) + f(a,b+1,c-1);
}

int main(){
    while(cin >> n, n){
        cout << f(1,2,n-3) << endl;
    }

    return 0;
}
