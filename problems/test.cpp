
#include<iostream>
#include<cmath>

using namespace std;

double alog10(double n){
    return log(n)/log(10);
}

int main(){
    long long n,k;
    double ax;
    int dig;

    while(cin>>n>>k){
        ax=0;

        for(int i=0;i<k;i++)
            ax+=alog10(n-i)-alog10(i+1);

        dig=floor(ax)+1;

        cout<<dig<<endl;
    }

    return 0;
}
