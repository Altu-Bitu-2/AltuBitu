#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int arr[50005], n;
    for(int i = 1; i <= 50000; i++){
        arr[i] = 4;
    }
    for(int i = 1; i*i <= 50000; i++){
        arr[i*i] = 1;
        for(int j = 1; i*i + j*j <= 50000; j++){
            if(arr[i*i+j*j] >2) arr[i*i + j*j] = 2;
            for(int k = 1;i*i + j*j + k*k <= 50000; k++){
                if(arr[i*i+j*j+k*k] >3)arr[i*i + j*j + k*k] = 3;
            }
        }
    }
    cin >> n;
    cout << arr[n]<<"\n";
}
