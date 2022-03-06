#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, i;
    vector< pair<int ,int> > v, iter;
    pair<int, int> tmp;
    cin >> N;
    i = N;
    while(i-->0){
        cin >> tmp.second >> tmp.first;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        cout << v[i].second << " "<<v[i].first <<"\n";
    }
    return 0;
}
