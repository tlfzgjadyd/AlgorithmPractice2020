#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> arr1;
	arr1=vector<int>(10); //10개짜리 초기화

	arr1.push_back(10); //10을 넣음, 방은 11개로 늘어남
        arr1.push_back(9);  //9를 넣음, 방은 12개로 늘어남
        arr1.pop_back(); //하나제거, 방은 11개로 줄어들음

	//이것이 array와의 다른 점인데 pop이나 push하면 array 전체의 길이가 변한다 그래서 메모리 관리에 용이
	//알고리즘 어려운 문제중에선 메모리 관리 요구하는 문제들이 있는데
	//데이터 왕창 주고 풀어보라 하는데 아무생각 없이 돌리면 메모리 부족이뜸
	//뭐하나 할 때마다 free해주고 이래야했는데 이걸 사용시 가비지컬렉터 비슷한게 알아서 잘 잡아줌

	for(vector<int>::iterator i=arr1.begin(); i!=arr1.end(); i++){
		//처음부터 끝까지 반복자로 돌면서 그 값을 출력
		cout << *i <<endl;
		//이때 반복자도 포인터로 인식되기 때문에 그냥 i말고 *i로 출력해줘야한다
	}
	return 0;
}
