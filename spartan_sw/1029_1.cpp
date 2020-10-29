//위에서 아래로 문제
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> arr(N, 0);
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	sort(arr.rbegin(), arr.rend()); //리버스 이터레이터 사용
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
