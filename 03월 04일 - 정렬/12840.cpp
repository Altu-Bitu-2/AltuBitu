//12840 창용이의 시계
/*
한 쿼리는 T로 시작한다. (1 ≤ T ≤ 3, 0 ≤ c ≤ 10,000,000)
T가 1일 때는 c를 입력으로 받아와서, 시계를 앞으로 c초 돌린다.
T가 2일 때는 c를 입력으로 받아와서, 시계를 뒤로 c초 돌린다.
T가 3일 때는 창용이가 조작한 시계의 상황을 출력한다.*/

/* input
현재 시간이 h m s 로 주어진다. (0 ≤ h ≤ 23, 0 ≤ m ≤ 59, 0 ≤ s ≤ 59)
그 다음 쿼리의 개수 q가 주어진다. (1 ≤ q ≤ 100,000)
다음 q개의 줄에는 쿼리가 주어진다. 쿼리의 형태는 위와 같다.
*/

/* output
쿼리의 T가 3 일때, 창용이가 이리 저리 바꿔 놓은 시계가 가리키는 시간을
h’ m’ s’ 의 형태로 출력한다. T가 3인 쿼리는 하나는 꼭 주어진다.
*/
#include<iostream>
using namespace std;
const int DAY = 24;
const int HR = 3600;
const int MNT = 60;

void printTime(int s){
    int h, m;
    if(s<0)s+=DAY*HR;
    s%=DAY*HR;
    h = s/HR;
    s%=HR;
    m = s/MNT;
    s%=MNT;
    cout << h << " "  << m << " " <<  s << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T, c, h, m, s, q, time;
    cin >> h >> m >> s >> q;
    time = HR*h + MNT*m +s;
    while(q-->0){
        cin >> T;
        switch(T){
        case 1:
            cin >> c;
            c%=HR*DAY;
            time += c;
            time %=HR*DAY;
            break;
        case 2:
            cin >> c;
            c %= HR*DAY;
            time -= c;
            time %= HR*DAY;
            break;
        case 3:
            printTime(time);
        }
    }
    return 0;
}
