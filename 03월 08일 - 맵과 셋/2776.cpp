//2776 암기왕
/*
첫째 줄에 테스트케이스의 개수 T가 들어온다. 다음 줄에는 ‘수첩 1’에 적어 놓은 정수의 개수 N(1 ≤ N ≤ 1,000,000)이 입력으로 들어온다. 그 다음 줄에  ‘수첩 1’에 적혀 있는 정수들이 N개 들어온다. 그 다음 줄에는 ‘수첩 2’에 적어 놓은 정수의 개수 M(1 ≤ M ≤ 1,000,000) 이 주어지고, 다음 줄에 ‘수첩 2’에 적어 놓은 정수들이 입력으로 M개 들어온다. 모든 정수들의 범위는 int 로 한다.
*/
/*
‘수첩2’에 적혀있는 M개의 숫자 순서대로, ‘수첩1’에 있으면 1을, 없으면 0을 출력한다.
*/
//set 사용 시 시간 초과 -> 이분탐색으로 변경
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool find_num(vector<int> & v, int num, int n){
    bool swtch = false;
    int l = 0, r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(v[mid] > num) r= mid-1;
        else if(v[mid] < num) l=mid+1;
        else {
            swtch = true;
            break;
        }
    }
    return swtch;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m, input, T;
    vector<int> num;
    cin >> T;
    while(T--){
        //input
        cin >> n;
        num.assign(n, int());
        for(int i = 0; i < n; i++) cin >> num[i];
        //sort
        sort(num.begin(), num.end());
        //check
        cin >> m;
        while(m--){
            cin >> input;
            if(find_num(num, input, n)) cout << "1\n";
            else cout << "0\n";
        }
    }
    return 0;
}
