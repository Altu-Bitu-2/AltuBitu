//1431 시리얼 번호
/* input
첫째 줄에 기타의 개수 N이 주어진다. N은 50보다 작거나 같다. 둘째 줄부터 N개의 줄에 시리얼 번호가 하나씩 주어진다. 시리얼 번호의 길이는 최대 50이고, 알파벳 대문자 또는 숫자로만 이루어져 있다. 시리얼 번호는 중복되지 않는다.
*/
/* output
첫째 줄부터 차례대로 N개의 줄에 한줄에 하나씩 시리얼 번호를 정렬한 결과를 출력한다.
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int getSum(string n){
    int ans = 0;
    for(int i = 0; i <n.length(); i++){
        if(isdigit(n.at(i))) ans += n.at(i)-48;
        //when converting char to int, remember to use ascii code
    }
    return ans;
}

bool cmp(string a, string b){
    if(a.length()!=b.length()) return a.length()<b.length();
    else if(getSum(a) != getSum(b)) return getSum(a) < getSum(b);
    return a< b;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N, i;
    vector<string> v;
    cin >> N;
    v.assign(N, string());
    
    for(int i = 0; i < N; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end(), cmp);
    
    for(i = 0; i < N;i++)
        cout << v[i] << "\n";
    return 0;
}
