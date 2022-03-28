#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int N, ans = 0;
    string s;
    bool chk;
    vector<bool> v;
    cin >> N;
    while(N--){
        cin >> s;
        chk = true;
        v.assign(27, false);
        for(int i =0 ;i < s.length(); i++){
            if(v[s[i]-'a'] == false) v[s[i]-'a'] = true;
            else{
                chk = false;
                break;
            }
            while(s[i] == s[i+1]) i++;
            
        }
        if(chk) ans++;
    }
    cout << ans<<"\n";
}
