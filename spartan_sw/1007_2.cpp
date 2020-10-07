#include<bits/stdc++.h>
using namespace std;
{
    
}
int main(){

    int n, m;
    cin >> n >> m; //n이 행이고 m이 열
    int y, x, d;
    cin >>y>>x>>d;

    vector<int> dx = {-1, 0, 1, 0}; //방향이 0 1 2 3이라 각각에 해당되는거
    vector<int> dy = {0, 1, 0, -1};

    vector<vector<int>> map(n, vector<int>(m, 0)), visit(n, vector<int>(m, 0));

    for(int i=0;i<n;i++)
    {
        for(int j=0; tmp; j<m;j++){
            cin>>tmp;
            map[i][j] = tmp;
        }
    }

    int nx, ny, count=0, turn_time=0; //nx, ny는 내가 나간 위치, count는 내가 신대륙 얼마나 발견했냐, turn time은 한바퀴 돌때마다 늘어나다가 다돌면 멈추고 밑으로감
    while(true){
        left(d);
        nx = x+dx[d];
        ny = y+dy[d];
        if(d[ny][nx]==0 and map[ny][nx]==0){
            d[ny][nx]=1;
            x=nx;
            y=ny;
            count++;
            turn_time=0;
            continue;
        }else{
            turn_time++;
        }
        if(turn_time==4){       //4바퀴 모두 다 돌아서 갈 수 없는 경우에는
                nx=x-dx[d];     //일단 갈곳 지정해주고
                ny=y-dy[d];
           if(map[ny][nx]==0){
               x=nx;
               y=ny;
            }else{
                break;              //아니면 탈출
            }
        }
    }
    //1.케이크팝 2. 요금계산  5.한글설치
    cout<<count;
}