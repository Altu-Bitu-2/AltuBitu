//1026. 보물
//S = A[0] × B[0] + ... + A[N-1] × B[N-1]
//fin min(S)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){   
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> a, b;
    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        b.push_back(tmp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    tmp = 0;
    for(int i = 0; i < N; i++) tmp += a[i]*b[i];
    cout << tmp << "\n";
    return 0;
}
