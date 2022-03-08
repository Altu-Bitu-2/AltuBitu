#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);    cin.tie(0);    cout.tie(0);
    int arr[22], i, s, e;
    for(i = 0; i <= 20; i++) arr[i] = i;
    i = 10;
    while(i--){
        cin >> s >> e;
        while(s<e) swap(arr[s++], arr[e--]);
    }
    for(i = 1; i <= 20; i++) cout << arr[i] << " ";
}
