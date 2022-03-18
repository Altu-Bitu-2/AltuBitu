#include<iostream>
#include<vector>

using namespace std;
int calc(int num, int k){
    return (num+k)%k;
}
int main(){
    int N, K, tmp;
    vector<int> v;
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        v.push_back(i+1);
    }
    cout << "<" << v[K-1];
    v.erase(v.begin()+K-1);
    tmp = K-1;
    for(int i = 1; i < N; i++){
        tmp = (tmp + K-1) % (N-i);
        cout <<", "<< v[tmp];
        v.erase(v.begin() + tmp);
    }
    cout << ">\n";
    return 0;
}
