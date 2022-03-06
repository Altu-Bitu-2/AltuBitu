#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int get_sum(string n){
    int ans = 0;
    for(int i = 0; i <n.length(); i++){
        if(isdigit(n.at(i))) ans += n.at(i)-48;
        //when converting char to int, remember to use ascii code
    }
    return ans;
}

bool cmp(string a, string b){
    if(a.length() < b.length()) return true;
    else if (a.length() > b.length()) return false;
    if(get_sum(a) < get_sum(b)) return true;
    else if(get_sum(a) > get_sum(b)) return false;
    return a<b;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N, i;
    vector<string> v;
    string tmp;
    cin >> N;
    i = N;
    while(i-->0) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for(i = 0; i < N;i++){
        cout << v[i] << "\n";
    }
    return 0;
}
