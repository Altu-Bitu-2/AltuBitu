#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int gcd(int a, int b){
    if(a< b) swap(a, b);
    int n;
    while(b!=0){
        n = a%b;
        a = b;
        b= n;
    }
    return a;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    int a = 0, b = 0, gcd_num;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ':') {
            string tmp = s.substr(0, i);
            a = stoi(tmp);
            tmp = s.substr(i+1, s.length());
            b = stoi(tmp);
        }
    }
    
    gcd_num = gcd(a, b);
    cout << a/gcd_num << ":" << b/gcd_num << "\n";
    return 0;
    
}
