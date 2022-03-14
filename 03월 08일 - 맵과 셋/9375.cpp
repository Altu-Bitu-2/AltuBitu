//9375 패션왕 신해빈
/*
해빈이는 패션에 매우 민감해서 한번 입었던 옷들의 조합을 절대 다시 입지 않는다. 예를 들어 오늘 해빈이가 안경, 코트, 상의, 신발을 입었다면, 다음날은 바지를 추가로 입거나 안경대신 렌즈를 착용하거나 해야한다. 해빈이가 가진 의상들이 주어졌을때 과연 해빈이는 알몸이 아닌 상태로 며칠동안 밖에 돌아다닐 수 있을까?
*/
/*
첫째 줄에 테스트 케이스가 주어진다. 테스트 케이스는 최대 100이다.
각 테스트 케이스의 첫째 줄에는 해빈이가 가진 의상의 수 n(0 ≤ n ≤ 30)이 주어진다.

다음 n개에는 해빈이가 가진 의상의 이름과 의상의 종류가 공백으로 구분되어 주어진다.
같은 종류의 의상은 하나만 입을 수 있다.

모든 문자열은 1이상 20이하의 알파벳 소문자로 이루어져있으며 같은 이름을 가진 의상은 존재하지 않는다.
*/
/*
각 테스트 케이스에 대해 해빈이가 알몸이 아닌 상태로 의상을 입을 수 있는 경우를 출력하시오.
*/
//각 의상 부위 별로 개수들의 곱-1
#include<iostream>
#include<map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T, N, ans;
    string ct, tmp;
    map<string, int>::iterator iter;
    
    cin >> T;
    
    while(T--){
        cin >> N;
        map<string, int> m;

        while(N--){
            cin >> tmp >> ct;
            if(m.find(ct) != m.end()) m[ct]++;
            else m.insert(pair<string, int>(ct, 1));
        }
        ans = 1;
        for(iter = m.begin(); iter != m.end(); ++iter){
            ans*=iter->second+1;
        }
        cout << ans -1 << "\n";
    }
    return 0;
}
