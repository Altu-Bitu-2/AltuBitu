#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T, N, min, ans;
    pair <int , int> tmp;
    vector< pair<int, int> > apply;

    cin >> T;
    while(T-->0){
        cin >> N;
        ans = 1;
        for(int i = 0; i < N; i++){
            cin >> tmp.first  >> tmp.second;
            apply.push_back(tmp);
        }
        sort(apply.begin(), apply.end());
        min = apply[0].second;

        for(int i = 1; i < N; i++){
            if(apply[i].second < min){
                min = apply[i].second;
                ans ++;
            }
        }
        cout << ans << "\n";
        apply.clear();
    }
    return 0;
}
