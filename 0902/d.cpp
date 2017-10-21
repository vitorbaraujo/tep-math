#include <bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

int main(){
    int to, from;
    char ss[15];

    const string digits = "0123456789ABCDEF";

    while(scanf("%d %d %s", &from, &to, ss) != EOF){
        int maxi = -1;
        ll res = 0;
        for(int i=0;i<strlen(ss);i++){
            char c = ss[i];
            int ff = digits.find(c);
            if(ff == string::npos){
                maxi = from + 1;
                break;
            }
            res *= from;
            res += ff; 
            maxi = max(maxi, (int)ff);
        }

        if(maxi >= from){
            printf("%s is an illegal base %d number\n", ss, from);
            continue;
        }


        ll aux = res;

        string tos = "";

        do{
            int diff = aux % to;
            tos += digits[diff];
            aux /= to;
        }while(aux);

        reverse(tos.begin(), tos.end());
        printf("%s base %d = %s base %d\n", ss, from, tos.c_str(), to);
    }

    return 0;
}
