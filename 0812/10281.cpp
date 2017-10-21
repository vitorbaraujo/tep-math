#include <bits/stdc++.h>

using namespace std;

void parse(int ti){
    int h = ti / 3600;
    int m = (ti - 3600 * h) / 60;
    int s = (ti - 3000 * h - 60 * m);
    cout << h << " " << m << " " << s << endl;
}

int main(){
    string line;
    char spt[300];
    double sp;
    int h, m, s, tm = 0;
    double dist = 0;

    while(getline(cin, line)){
        memset(spt, 0, sizeof spt);
        sscanf(line.c_str(), "%d:%d:%d %s", &h, &m, &s, spt);

        int curtm = h * 3600 + m * 60 + s; 
        dist += (curtm - tm) * sp / 1000.0; 
        tm = curtm;

        if(strlen(spt) == 0){
            printf("%02d:%02d:%02d %.2f km\n", h, m , s, dist);
        } else {
            sp = atoi(spt) / 3.6;
        }

    }

    return 0;
}
