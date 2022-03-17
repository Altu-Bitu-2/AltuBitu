//1918 후위표기식
/*첫째 줄에 중위 표기식이 주어진다. 단 이 수식의 피연산자는 알파벳 대문자로 이루어지며 수식에서 한 번씩만 등장한다. 그리고 -A+B와 같이 -가 가장 앞에 오거나 AB와 같이 *가 생략되는 등의 수식은 주어지지 않는다. 표기식은 알파벳 대문자와 +, -, *, /, (, )로만 이루어져 있으며, 길이는 100을 넘지 않는다. */
/*
첫째 줄에 후위 표기식으로 바뀐 식을 출력하시오
*/
#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
stack <char> s;

void calc(string str){
    string ans = "";
    for(int i = 0; i < str.length(); i++){
        if( 'A' <= str[i] && str[i]<='Z' ) ans += str[i];
        else{ 
            if(str[i] == '(') s.push(str[i]);


            else if(str[i] == '*' || str[i] == '/'){
                while(!s.empty() && (s.top() == '*' || s.top() == '/')){
                    ans +=  s.top();
                    s.pop();
                }
                s.push(str[i]);
            }

            else if(str[i] == '+' || str[i] == '-') {
                while(!s.empty() && s.top() != '('){
                    ans += s.top();
                    s.pop();
                }
                s.push(str[i]);
            }

            else if(str[i] == ')'){
                while(!s.empty() && s.top() != '('){
                    ans +=  s.top();
                    s.pop();
                }
                s.pop();
            }

        }
    }
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }
    cout << ans<<"\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string str;
    getline(cin, str);
    calc(str);
    return 0;
}
