#include <bits/stdc++.h>

using namespace std;

int v[1000010];

int main(){
    for(int i=1;i<=1000000;i++){
        if(not v[i]) printf("%d\n", i);
        int sum = i;
        int nn = i;
        while(nn){
            sum += nn%10;
            nn /= 10;
        }
        if(sum <= 1000000) v[sum] = 1;
    }

    return 0;
}
