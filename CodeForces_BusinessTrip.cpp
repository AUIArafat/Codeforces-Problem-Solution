#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int K, Month, Sum = 0, cnt = 0;
    cin>>K;
    vector <int> time;
    for(int i=0;i<12;i++){
        cin>>Month;
        time.push_back(Month);
    }
    std::sort(time.begin(), time.end());
    if(K==0)
        cout<<0<<endl;
    else{
        for(int i=time.size()-1;i>=0;i--){
            Sum = Sum + time[i];
            ++cnt;
            if(Sum>=K){
                cout<<cnt<<endl;
                break;
            }
        }
        if(K>Sum)
            cout<<-1<<endl;
    }
}
