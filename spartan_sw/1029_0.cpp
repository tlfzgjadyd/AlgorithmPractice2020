#include<iostream>
#include<vector>
//퀵정렬은 nlogn 가정하고 하는데 100만개 넘어가면 안먹힘
using namespace std;
int main(){
	vector<int> arr = {1, 2, 3, 1, 3, 1, 5, 6,6 ,4 , 4, 3,5,7 };
	vector<int> count(0, 10);
	for(int i=0;i<arr.size();i++){
		count[arr[i]]++;
	}
	for (int i=0;i<10;i++){
		for(int j=0;j<count[i];j++){
			cout<<i<<" ";
		}
	}
	return 0;
}
