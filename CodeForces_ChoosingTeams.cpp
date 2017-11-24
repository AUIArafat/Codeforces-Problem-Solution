#include<iostream>
using namespace std;
int main(){
    int N, K, Y;
    cin>>N>>K;
    int cnt =0;
    for(int i=0;i<N;i++){
        cin>>Y;
        if(5-Y>=K)
            ++cnt;
    }
        cout<<cnt/3<<endl;
}
