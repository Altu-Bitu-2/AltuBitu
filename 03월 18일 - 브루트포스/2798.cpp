#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M, ans = 0, sum;
    cin >> N >> M;
    int arr[N+5];
    for(int i = 0; i < N; i++) cin >> arr[i];
    for(int i = 0; i < N-2; i++){
        for(int j = i+1; j<N-1; j++){
            for(int k = j+1; k<N; k++){
                sum = arr[i]+arr[j]+arr[k];
                if(sum<=M && ans < sum) ans = sum;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
