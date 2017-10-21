#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;

    cin >> k;
    while(k--){
        scanf("%d", &n);
        double y = - (n * log10(2) + 1);
        double x = y - (int)y;
        printf("2^-%d = %.3fE%d\n", n, 10 * pow(10, x), int(y));
    }

    return 0;
}
