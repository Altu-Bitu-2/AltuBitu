#include<iostream>
using namespace std;

bool isPN(int n){
    for(int i = 2; i*i <= n; i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, a, b;
    bool chk;
    while(1){
        chk = false;
        cin >> n;
        if(n==0) break;
        for(int i = 3; i < n; i+=2){
            if(isPN(i) && isPN(n-i)){
                cout << n << " = " << i << " + " << n - i << "\n";
                chk = true;
                break;
            }
        }
        if(!chk) cout << "Goldbach's conjecture is wrong.\n";
    }
    return 0;
}
