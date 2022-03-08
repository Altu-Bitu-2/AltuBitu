//1946 신입사원
/* input
첫째 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 20)가 주어진다. 각 테스트 케이스의 첫째 줄에 지원자의 숫자 N(1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개 줄에는 각각의 지원자의 서류심사 성적, 면접 성적의 순위가 공백을 사이에 두고 한 줄에 주어진다. 두 성적 순위는 모두 1위부터 N위까지 동석차 없이 결정된다고 가정한다.
*/
/* output
각 테스트 케이스에 대해서 진영 주식회사가 선발할 수 있는 신입사원의 최대 인원수를 한 줄에 하나씩 출력한다.
*/

#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T, N, fst_rnk, ans;
    pair <int , int> tmp;
    vector< pair<int, int> > apply;
    cin >> T;
    while(T-->0){
        cin >> N;
        apply.assign(N, tmp);
        ans = 1;
        for(int i = 0; i < N; i++)
            cin >> apply[i].first  >> apply[i].second;
        
        sort(apply.begin(), apply.end());
        fst_rnk = apply[0].second;

        for(int i = 1; i < N; i++){
            if(apply[i].second < fst_rnk){
                fst_rnk = apply[i].second;
                ans ++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
