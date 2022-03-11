//20291 파일정리
/*
파일을 확장자 별로 정리해서 몇 개씩 있는지 알려줘
보기 편하게 확장자들을 사전 순으로 정렬해 줘
*/

/*
첫째 줄에 바탕화면에 있는 파일의 개수 N이 주어진다. (1<=N<=50,000)
둘째 줄부터 N개 줄에 바탕화면에 있는 파일의 이름이 주어진다.
파일의 이름은 알파벳 소문자와 점(.)으로만 구성되어 있다. 
점은 정확히 한 번 등장하며, 파일 이름의 첫 글자 또는 마지막 글자로 오지 않는다.
각 파일의 이름의 길이는 최소 3, 최대 100이다.
*/

/*
확장자의 이름과 그 확장자 파일의 개수를 한 줄에 하나씩 출력한다. 확장자가 여러 개 있는 경우 확장자 이름의 사전순으로 출력한다.
*/
//. 기준 뒤의 확장자만 뽑을 수 있는지. map 기능을 이용하여 개수를 저장할 수 있는지.
#include<iostream>
#include<map>
using namespace std;

string get_ex(string s){
    int i;
    for(i = 0; i < s.length(); i++){
        if(s.at(i) == '.') {
            break;
        }
    }
    return s.substr(i+1, s.length()-i-1);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N;
    string s, extn;
    map<string, int> m; //<extension, number>

    cin >> N;
    
    while(N--){
        //input
        cin >> s;
        //chk extension
        extn = get_ex(s);
        //if in map -> ++ or insert in map <extension, 1>
        if(m.find(extn) != m.end()) m[extn]++;
        else m.insert(pair<string, int>(extn, 1));
    }
    //print
    map<string, int>::iterator iter;
    for(iter = m.begin(); iter != m.end(); ++iter)
        cout<< iter->first << " " << iter->second << "\n";
    
    return 0;
}
