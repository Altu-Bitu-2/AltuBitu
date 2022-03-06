#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp (int i , int j){ return j<i;}
int main(){   
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<int> a, b;
    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i = 0; i < N; i++) {
        cin >> tmp;
        b.push_back(tmp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), cmp);
    tmp = 0;
    for(int i = 0; i < N; i++) tmp += a[i]*b[i];
    cout << tmp << "\n";
    return 0;
}
/*#include<stdio.h>
int A[51] = {0,};
int B[51] = {0,};

int compare_a(const void* a, const void* b){
    if(*(int*)a > *(int*)b)
        return 1;
    else if(*(int*)a < *(int*)b)
        return -1;
    else return 0;
}

int compare_b(const void* a, const void* b){
    if(*(int*)a < *(int*)b)
        return 1;
    else if(*(int*)a > *(int*)b)
        return -1;
    else return 0;
}


int main(){
    int N, tmp=0;
    scanf("%d", &N);
    for(int i = 0; i<N; i++) scanf("%d", &A[i]);
    for(int i = 0; i<N; i++) scanf("%d", &B[i]);
    qsort(A, N, sizeof(int), compare_a);
    qsort(B, N, sizeof(int), compare_b);

    for(int i = 0; i < N; i++){
        tmp+=A[i]*B[i];
    }
    printf("%d", tmp);
}

*/
