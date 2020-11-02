#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//대표예시 : 피보나치
//실전문제 1. 최소 루트 아닌데도 검사하는 일도 생김
//5, 3, 2, -1중 30은 5, 3, 2다 쓸수있는데 
//30은 5로나누면 6->5->1
//30은 3으로 나누면->10->2->1
//30은 15로 나누면 15->3->1
//전부 같다 그럼 배수인 60도 이것이 적용되는지 확인해보면
//결국 배수인 상황에서는 셋다 같은 길이가 나옴을 알 수 있음
int main(){
	int X;
	cin >>X;
	vector<int> dp(1000, 0);
	int count=0;
	int result=0;
	for (int i=2;i<=X;i++){ //연산횟수 계산해서 그중 최단인 애를 dp[i]에 넣겠다
		dp[i]=dp[i-1]+1;

		if(i%2==0){
			d[i]=min(d[i], dp[i/2]+1)
		}
		if(i%3==0){
			dp[i]=min(dp[i], dp[i/3]+1);
		}
		if(i%5==0){
			dp[i]=min(dp[i], dp[i/5]+1);
		}
	}
	cout<<dp[X];
	return 0;//이건 바텀업 방식이라 피보나치 푸는방법과 매우 유사함
}
