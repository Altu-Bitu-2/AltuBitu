#include<iostream>
#include<algorithm>
#define SWAP(a,b) {int t; t=a; a=b; b=t;}
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);    cin.tie(0);    cout.tie(0);
    int arr[22], i, s, e;
    for(i = 0; i <= 20; i++) arr[i] = i;
    i = 10;
    while(i--){
        cin >> s >> e;
        while(s<e) swap(arr[s++], arr[e--]);
    }
    for(i = 1;i <= 19; i++) cout << arr[i] << " ";
    cout<<arr[20] << "\n";
}
/*
pair <int, int> p[22]; //indx , num


int main(){
    ios_base::sync_with_stdio(0);    cin.tie(0);    cout.tie(0);
    for(int i = 0; i <= 21; i++){
        p[i].first = i+1;
        p[i].second = i+1; 
    }
    for(int i = 0;i < 10; i++){
        int start, end;
        cin >> start >> end;
        for(int j = start; j <= (end+start)/2; j++){
            //cout << p[j+1].first<< "swap" << p[end-j+1].first << " \n";
            //cout <<j << "swap" <<end-j+start << " \n";
            SWAP(p[j-1].first, p[end-j+start-1].first);
        }
        sort(p, p+21);
        //for(int i =1;i <= 20; i++) cout << p[i].first<< "," << p[i].second << " ";
        //cout<<"\n";
    }
    for(int i = 0;i < 19; i++) cout << p[i].second << " ";
    cout<<p[19].second << "\n";
}
*/
