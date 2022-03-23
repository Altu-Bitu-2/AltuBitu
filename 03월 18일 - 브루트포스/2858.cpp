#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int R, B, i, j, sum;
    cin >> R >> B;
    sum = R/2-2;
    for(i = 1; i < sum; i++){
        j = sum - i;
        if(B == i*j) break;
    }
    cout << j+2 << " " << i+2 << "\n";
    return 0;
}
