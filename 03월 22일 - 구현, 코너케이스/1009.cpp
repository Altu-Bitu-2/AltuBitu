#include<iostream>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T, a, b, ans;
    cin >> T;
    while(T--){
        cin >> a >> b;
        b%=4;
        if(b==0) b = 4;
        ans =pow(a,b);
        if(ans %10 == 0) cout << "10\n";
        else cout << ans%10 << "\n";
    }
    return 0;
}
