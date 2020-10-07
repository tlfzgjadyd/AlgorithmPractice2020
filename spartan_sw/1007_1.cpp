#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    cin>>n;

    for(int hour=0;hour<=n; hour++){
        for(int min=0; min<60;min++){
            for(int sec=0;sec<60;sec++){
                if(hour==3||hour==13 ||hour==23){
                    sum++;
                    continue;
                }
                if(min/10==3||min%10==3){
                    sum++;
                    continue;
                }
                if(sec/10==3||sec%10==3){
                    sum++;
                    continue;
                }
            }
        }
    }
    cout<<sum;
}