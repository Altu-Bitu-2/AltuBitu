#include<iostream>
#include<algorithm>
#include<vector>
bool cmp(int i , int j){
    return j<i;
}
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long ans = 0;
    vector<int> v;
    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < N; i++){
        if(v[i] - i <= 0) break;
        ans += v[i]-i;
    }
    cout << ans;
    return 0;
}
/*#include<stdio.h>
#include<stdlib.h>

int arr[100001] = {0,};

int compare(const void* a, const void *b){
    if(*(int*)a > *(int*)b)
        return -1;
    else if (*(int*)a < *(int*)b)
        return 1;
    return 0;
}

int main(){
    int N;
    long long int answer = 0;
    scanf("%d", &N);
    for(int i = 0; i <N; i++) scanf("%d", &arr[i]);
    qsort(arr,N,sizeof(int),compare);
    for(int i = 0; i<N; i++){
        if((arr[i]-i) <= 0) break;
        else answer += arr[i]-i;
    }
    printf("%lld", answer);
    }*/
