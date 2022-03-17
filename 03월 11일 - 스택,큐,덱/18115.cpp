//18115 카드놓기
/*
제일 위의 카드 1장을 바닥에 내려놓는다.
위에서 두 번째 카드를 바닥에 내려놓는다. 카드가 2장 이상일 때만 쓸 수 있다.
제일 밑에 있는 카드를 바닥에 내려놓는다. 카드가 2장 이상일 때만 쓸 수 있다.
수현이는 처음에 카드 N장을 들고 있다. 카드에는 1부터 N까지의 정수가 중복되지 않게 적혀 있다. 기술을 N번 사용하여 카드를 다 내려놓았을 때, 놓여 있는 카드들을 확인했더니 위에서부터 순서대로 1, 2, …, N이 적혀 있었다!
*/
/*
첫 번째 줄에는 N (1 ≤ N ≤ 106)이 주어진다.

두 번째 줄에는 길이가 N인 수열 A가 주어진다. Ai가 x이면, i번째로 카드를 내려놓을 때 x번 기술을 썼다는 뜻이다. Ai는 1, 2, 3 중 하나이며, An은 항상 1이다.
*/
/*
초기 카드의 상태를 위에서부터 순서대로 출력하여라.
*/
#include<iostream>
#include<deque>
using namespace std;
int main(){
    int N, i, tmp;
    cin >> N;
    int arr[N+2];
    deque<int> dq;
    deque<int>::iterator iter;
    for(i = N; i>0; i--)
        cin >> arr[i];
    for(i = 1; i <= N; i++){
        switch(arr[i]){
        case 1:
            dq.push_front(i);
            break;
        case 2:
            tmp = dq[0];
            dq.pop_front();
            dq.push_front(i);
            dq.push_front(tmp);
            break;
        case 3:
            dq.push_back(i);
            break;
        }
    }
    for(iter = dq.begin(); iter!=dq.end(); iter++){
        cout << *iter <<" ";
    }
    cout << "\n";
    return 0;
}
