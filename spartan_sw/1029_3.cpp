#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int N ,M;
	cin>>N>>M;

	vector<vector<int>> arr(N, vector<int>(M, 0));
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>arr[i][j];
		}
	}
	int count=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(dfs(N, M, i. j, arr)){
				count++;
			}
		}
	}
	return 0;
}

bool dfs(int x,int M,int N, int y, vector<vector<int>> arr){
	if(x<0||y<0||x > N||y > M){
		return false;
	}
	if(arr[x][y]==0){
		arr[x][y]=1;
		dfs(N, M, x-1, y-1, arr);
		dfs(N, M, x+1, y-1, arr);
		dfs(N, M, x-1, y+1, arr);
		dfs(N, M, x+1, y+1, arr);
		return true;
	}
}
