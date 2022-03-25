#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> arr(50005, 4);
    int n;
    cin >> n;
    for(int i = 1; i*i <= 50000 && i*i <= n; i++){
        arr[i*i] = 1;
        for(int j = 1; i*i + j*j <= 50000 && i*i + j*j <= n; j++){
            if(arr[i*i+j*j] >2) arr[i*i + j*j] = 2;
            for(int k = 1;i*i + j*j + k*k <= 50000 && i*i + j*j+k*k <= n; k++){
                if(arr[i*i+j*j+k*k] >3)arr[i*i + j*j + k*k] = 3;
            }
        }
    }
    cout << arr[n]<<"\n";
}
