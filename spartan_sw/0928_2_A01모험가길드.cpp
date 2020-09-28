//원래는 시간 절약차 hits/stdc++.h 하면 다 들어있다 근데
//지금은 어디 들어있는지는 알아야하니까 진짜 든곳에 하겠다
//bits/stdc++.h인가

// A01 모험가 길드 문제
// input이 1~10만 인데 그럼 이 문제는 집합 문제잖아
// 10만인데 N 세제곱이면 숫자가 너무 커짐
// 10만까진 괜찮으니까 N도 괜찮고 하니까 복잡도가 N정도 되는 문제라는건데
// 복잡도가 NlogN될라면 대부분의 방법으론 안통해서
// DFS 이런건 아닐거같단거임 물론 수를 적게 줘서 혼란 줄때도 있음
//
// 어떻게 해야 정답이 최선의 방법임을 검증할수 있을까
// 동전문제는 가장 동전을 많이 써서 가격을 맞춰라와 유사한 문제인데
// 앞에서부터 쏙쏙 빼도 성립이 되겠네요 한번얘를 C++로 구현해보겠습니다
// 뭐래는거야
// 
// 내가보기에 이건 무서움을 이기려면 사람수가 공포수보다 많아야한다는거같음
// 
//탱크문제 : 다른 탱크 피해가야할 일이 생긴다면 bfs인가로 풀고 그런일
//없다면 그리디로 풀면 된다함

#include <deque>
#include <vector>
#include<iostream>
#include <algorithm>

using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> X;
	
	for(int i=0;i<N;i++)
	{
	    int tmp;
	    cin>>tmp;
	    X.push_back(tmp);
	}
	sort(X.begin(), X.end());
	int sum=0;
	while(true)
	{
		int a=X.front();
		X.pop_front();
		Q.push_back(a);
		
		for(int i=0;i<Q.size();i++)
		{
			if(Q.size()>=Q(i)){
				out=true;
			}
		}
		if(out){
			continue;
		} else{
			Q.clear();
			sum++;
		}
		
	}
	cout<<sum;
}

