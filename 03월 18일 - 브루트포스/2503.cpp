#include<iostream>
#include<utility>
using namespace std;
//처음에 3중 for문 사용 out of bounds -> i = 123~987로 변경 -> 0이 들어가는 수 제외 ->??
//#########array 선언이 변수보다 빨라서 문제가 생김...
pair<int, int> calc(int n, int x){
    pair<int, int> ans; // strike, ball
    ans.first = 0; ans.second = 0;
    int n_h = n/100, n_t = (n%100)/10, n_o = n%10;
    int x_h = x/100, x_t = (x%100)/10, x_o = x%10;
    if(n_h == x_h) ans.first++;
    else if(n_h == x_t || n_h == x_o) ans.second++;
    if(n_t == x_t) ans.first++;
    else if(n_t == x_h || n_t == x_o) ans.second++;
    if(n_o == x_o) ans.first++;
    else if(n_o == x_t || n_o == x_h) ans.second++;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int ans = 0, N, h, t, o;
    pair<int,int> tmp;
    bool swtch;
    cin  >> N;
    int arr[N+5][3];

    for(int i = 0; i < N; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        //cout << i << " : "<<arr[i][0]<< ", "<< arr[i][1]<< ", " << arr[i][2]<<"\n";
    }
    for(int i = 1; i <10; i++){
        for(int j = 1; j < 10;j++){
            if(i == j) continue;
            for(int k = 1; k < 10; k++){
                if(i == k || k == j) continue;
                swtch = true;
                for(int p = 0; p < N; p++) {
                    tmp = calc(100*i+10*j+k, arr[p][0]);
                    if(tmp.first != arr[p][1] || tmp.second != arr[p][2]){
                        swtch = false;
                        break;
                    }
                }
                if(swtch) ans++;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
