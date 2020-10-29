#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> shop(N,0);
	for(int i=0;i<N;i++){
		cin>>shop[i];
	}

	int M;
	cin>>M;
	vector<int> order(M, 0);
	for(int i=0;i<N;i++){
		cin>>order[i];
	}
	for(int i=0;i<M;i++){
	vector<int>::iterator p=find(shop.begin(), shop/end(), order[i]);
	if(p==shop.end()){
		cout<<"no";
	}
	else{
		cout<<"yes";
	}
	}
	return 0;
}
