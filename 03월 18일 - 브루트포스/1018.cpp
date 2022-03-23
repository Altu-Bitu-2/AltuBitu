#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, M, ans, min = 64;
    cin >> N >> M;
    char arr[N+1][M+1];
    for(int i = 0; i<N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0;i < N-7; i++){
        for(int j = 0; j < M-7; j++){
            ans = 0;
            for(int p = 0;p < 8; p++){
                for(int q = 0; q<8; q++){
                    if((p+q)%2 == 0 && arr[i+p][j+q] == 'B') ans++;
                    else if((p+q)%2 == 1 && arr[i+p][j+q] == 'W') ans++;
                }
            }
            ans = ans<64-ans? ans : 64-ans;
            min = min< ans ? min : ans;
        }
    }
    cout << min << "\n";
    return 0;
}
