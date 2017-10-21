#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    int n;
    int a, b, c;

    cin >> n;

    while(n--){
        cin >> a >> b >> c;

       int res = (c * (2 *a - b)) / (a +b);
        printf("%d\n", res);
    }


    return 0;
}
