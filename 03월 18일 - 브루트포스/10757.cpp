#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string a, b, ans;
    int carry = 0;
    cin >> a >> b;
    if(a.length()< b.length()) swap(a, b);
    //cout << a << " "<< b<<"\n";
    reverse(a.begin(),a.end());
    reverse(b.begin(), b.end());
    int a_len = a.length(), b_len = b.length();
    for(int i = 0; i < a_len; i++){
        int p = a[i]- '0';
        int q = i>=b_len ? 0 : b[i] - '0';
        //cout << i << " : "<< p << " + "<< q <<" + "<< carry <<"\n" ;
        ans += ((p+q+carry)%10+'0');
        carry = (p+q+carry) / 10;
                
    }
    if(carry == 1) ans+= '1';
    reverse(ans.begin(), ans.end());
    cout << ans  << "\n";
    return 0;
}
