//19583 싸이버개강총회
/*
개강총회를 시작하기 전에, 학회원의 입장 확인 여부를 확인한다. 학회원의 입장 여부는 개강총회가 시작한 시간 이전에 대화를 한 적이 있는 학회원의 닉네임을 보고 체크한다. 개강총회를 시작하자마자 채팅 기록을 남긴 학회원도 제 시간에 입장이 확인된 것으로 간주한다.
개강총회를 끝내고 나서, 스트리밍을 끝낼 때까지 학회원의 퇴장 확인 여부를 확인한다. 학회원의 퇴장 여부는 개강총회가 끝나고 스트리밍이 끝날 때까지 대화를 한 적이 있는 학회원의 닉네임을 보고 체크한다. 개강총회가 끝나자마자 채팅 기록을 남겼거나, 개강총회 스트리밍이 끝나자마자 채팅 기록을 남긴 학회원도 제 시간에 퇴장이 확인된 것으로 간주한다.  
이 때, 입장부터 퇴장까지 모두 확인된 학회원은 전부 몇 명인가?
*/
/*
첫번째 줄에는 개강총회를 시작한 시간 S, 개강총회를 끝낸 시간 E, 개강총회 스트리밍을 끝낸 시간 Q가 주어진다. (00:00 ≤ S < E < Q ≤ 23:59)
각 시간은 HH:MM의 형식으로 주어진다.

두번째 줄부터는 HI-ARC에서 방송하는 스트리밍 영상의 채팅 기록들이 시간순으로 주어지는데, (시간) (학회원 닉네임)의 형태로 주어진다. 학회원의 닉네임은 알파벳 대소문자와 숫자, 그리고 특수 기호(., _, -)로만 구성된 문자열이며 최대 20글자이다.

모든 채팅 기록은 개강총회가 일어난 날에 발생한 채팅 기록이다. 즉 00:00~23:59의 시간만 주어진다. 채팅 기록은 10만 줄을 넘지 않는다.
*/
/*
출석이 확인된 학회원의 인원 수를 출력한다.
*/

#include<iostream>
#include<string>
#include<set>
//입력값만 잘 설정해주면 생각보다 쉬웠던 문제. set 사용 할 생각 못했으면 더 어려웠을 듯.
using namespace std;

int calc(string s){//change 22:00 -> 2200
    return stoi(s.substr(0,2))*100 + stoi(s.substr(3, 2));
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s, e, q, tm, nm;
    set<string> st;
    cin >> s >> e >> q;
    int start = calc(s), end = calc(e), qend = calc(q), time, ans = 0;
    while(cin.eof() == false){
        cin >> tm >> nm;
        time = calc(tm);
        if(time <= start) st.insert(nm);
        else if(time >= end && time <= qend) {
            if(st.find(nm)!=st.end()){
                ans++;
                st.erase(nm);
            }
        }
    }
    cout << ans;
    return 0;
}
