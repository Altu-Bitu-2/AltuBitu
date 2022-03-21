#include<iostream>
#include<cmath>
using namespace std;
bool isPN(int n){
    for(int i = 2; i < sqrt(n); i++){
        if(n%i==0)return false;
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
        for(int i = 1; i < n/2; i++){
            a = 2*i +1;
            b = n - a;
            if(isPN(a) && isPN(b)){
                cout << n <<  " = " << a << " + "<< b<<"\n";
                chk = true;
                break;
            }
        }
        if(!chk) cout << "Goldbach's conjecture is wrong.\n";
    }
    return 0;
}
