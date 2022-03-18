//boj 1213 팰린드롬 만들기
//영어이름이 주어진다(알파뱃 대문자만 구성, 최대 50글자)
//사전순으로 가장 앞서는 팰린드롬 수 출력. 없는 경우 I'm Sorry Hansoo 출력
#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    stack<char> stk;
    queue<char> q;
    string s;
    char mid;
    bool odd = false;
    int abc[30] = {0,};
    cin >> s;
    int len = s.length();
    for(int i = 0; i < len; i++)
        abc[s[i]-'A']++;
    /*for(int i = 0; i <= 'Z'-'A'; i++){
        cout << abc[i];
    }
    */
    for(int i = 0; i <= 'Z'-'A'; i++){
        if(abc[i]%2 == 0){
            for(int j = 0; j<abc[i]/2;j++) {
                stk.push(i+'A');
                q.push(i+'A');
            }
            //cout << i << " : " << q.front()<< " , " << stk.top()<<"\n";
                    
        }
        else if(odd == false){
            odd = true;
            for(int j = 0; j<abc[i]/2;j++) {
                stk.push(i+'A');
                q.push(i+'A');
            }
            mid = char(i +'A');
            //cout << mid;
        }
        else {
            cout<<"I'm Sorry Hansoo\n";
            return 0;
        }
    }

    for(int i = 0; i <len/2; i++) {
        cout << q.front();
        q.pop();
    }
    if(odd) cout << mid;
    for(int i = 0; i < len/2; i++) {
        cout << stk.top();
        stk.pop();
    }
    return 0;
}
