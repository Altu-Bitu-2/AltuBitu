//20920 영단어 암기는 괴로워
/*
자주 나오는 단어일수록 앞에 배치한다.
해당 단어의 길이가 길수록 앞에 배치한다.
알파벳 사전 순으로 앞에 있는 단어일수록 앞에 배치한다
길이가 M 이상인 단어들만 외운다
*/
/*
첫째 줄에는 영어 지문에 나오는 단어의 개수 N과 외울 단어의 길이 기준이 되는 M이 공백으로 구분되어 주어진다. 1≤N≤100000, 1≤M≤10
둘째 줄부터 N+1번째 줄까지 외울 단어를 입력받는다. 
이때의 입력은 알파벳 소문자로만 주어지며 단어의 길이는 10을 넘지 않는다.
단어장에 단어가 반드시 1개 이상 존재하는 입력만 주어진다.
*/
/*
화은이의 단어장에 들어 있는 단어를 단어장의 앞에 위치한 단어부터 한 줄에 한 단어씩 순서대로 출력한다.
*/
//시간초과 -> length()함수를 4번 불러오지 않고 변수로 저장해 2번만 실행하게 한 결과 성공
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
map<string, int> m;
vector<string> voca;

bool cmp(const string &a, const string &b){
    int lenA = a.length(), lenB = b.length();
    if(m[a] != m[b]) return m[a]>m[b];
    else if(lenA != lenB) return lenA > lenB;
    return a < b;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M;
    string s;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> s;
        if(s.length()<M) continue;
        else if(m.find(s) != m.end()) m[s]++;
        else {
            m[s]=1;
            voca.push_back(s);
        }
    }
    sort(voca.begin(), voca.end(), cmp);
    for(int i = 0; i < voca.size(); i++)
        cout << voca[i] << "\n";
    return 0;
}
