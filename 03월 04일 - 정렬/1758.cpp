//1758 알바생 강호
/* input
첫째 줄에 스타박스 앞에 서 있는 사람의 수 N이 주어진다. N은 100,000보다 작거나 같은 자연수이다. 둘째 줄부터 총 N개의 줄에 각 사람이 주려고 하는 팁이 주어진다. 팁은 100,000보다 작거나 같은 자연수이다.
*/
/* output
강호가 받을 수 있는 팁의 최댓값을 출력한다.
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long ans = 0;
    vector<int> v;
    int N, tmp;
    cin >> N;
    v.assign(N, int());
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i < N; i++){
        if(v[i] - i <= 0) break;
        ans += v[i]-i;
    }
    cout << ans;
    return 0;
}
