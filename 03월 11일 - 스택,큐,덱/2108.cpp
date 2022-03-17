//boj 2108 통계학
/*
산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이
N개의 수가 주어졌을 때, 네가지 기본 통계값을 구하는 프로그램을 작성하시오.
*/
/*
첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 단, N은 홀수이다. 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.
*/
/*
첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.
둘째 줄에는 중앙값을 출력한다.
셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.
넷째 줄에는 범위를 출력한다.
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long sum = 0;
    int arr[N+1], num[8001] = {0,}, max = 0, frq, mid, range;
    double avr;
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
        num[arr[i]+4000]++;
        if(num[arr[i]+4000] > max) max = num[arr[i]+4000];
    }
    sort(arr, arr+N);//오름차순
    avr = double(sum) / double(N);
    range = arr[N-1]- arr[0];
    mid = arr[N/2];
    bool flag = false;
    for(int i = 0; i <= 8000; i++){
        if(num[i] == max && flag == false) {
            frq = i-4000;
            flag = true;
        }
        else if(num[i]==max) {
            frq = i-4000;
            break;
        }
    }
    cout << floor(avr+0.5) << "\n"<< mid<<"\n"<<frq<<"\n"<<range<<"\n";
    return 0;
}

/*
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

bool cmp(const pair<int, int> &a, const pair<int,int> b){
    if(a.first != b.first) return a.first>b.first;
    return a.second < b.second;
}

int main(){
    long long sum=0;
    int N, mid, range, num = 1, max_f;
    vector< pair<int, int> > frqnt;// number of frequency, number
    double avr;
    cin >> N;
    int arr[N+1];
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+N);//오름차순
    mid = arr[N/2];
    avr = double(sum) / double(N);
    range = arr[N-1]- arr[0];
    for(int i = 0; i < N; i++){
        if(arr[i] == arr[i+1]) num++;
        else {
            frqnt.push_back(make_pair(num, arr[i]));
            num = 1;
        }
    }
    sort(frqnt.begin(), frqnt.end(), cmp);
    max_f = frqnt[0].second;
    if(frqnt[0].first == frqnt[1].first) max_f = frqnt[1].second;
    cout << floor(avr+0.5) << "\n"<< mid<<"\n"<<max_f<<"\n"<<range<<"\n";
    //printf("%1.lf\n%d\n%d\n%d\n", avr, mid, max_f , range);
    // for (int i = 0; i < frqnt.size(); i++)
    //  cout << frqnt[i].first << ":" << frqnt[i].second << "\n";
}
*/
