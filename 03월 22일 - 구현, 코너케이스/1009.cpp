#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T, a, b, ans;
    cin >> T;
    while(T--){
        cin >> a >> b;
        if(b%4 == 0) b =4;
        else b%=4;
        ans = pow(a, b);
        ans%=10;
        cout << ans << "\n";
    }
    return 0;
}
