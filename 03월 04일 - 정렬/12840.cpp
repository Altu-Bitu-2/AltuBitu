#include<iostream>
using namespace std;
#define ONE 3600*24;

void printTime(int s){
    int h, m;
    if(s<0)s+=ONE;
    s%=ONE;
    h = s/3600;
    s%=3600;
    m = s/60;
    s%=60;
    cout << h << " "  << m << " " <<  s << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T, c, h, m, s, q, time;
    cin >> h >> m >> s >> q;
    time = 3600*h + 60*m +s;
    while(q-->0){
        cin >> T;
        switch(T){
        case 1:
            cin >> c;
            c%=ONE;
            time += c;
            time %=ONE;
            break;
        case 2:
            cin >> c;
            c %= 3600*24;
            time -= c;
            time %= ONE;
            break;
        case 3:
            printTime(time);
        }
    }
    
    return 0;
}
