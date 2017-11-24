#include<iostream>

using namespace std;
int main(){
    int N,cnt = 1;
    long long K;
    cin>>N>>K;
    while(K%2!=1){
        K/=2;
        ++cnt;
    }
    cout<<cnt<<endl;
}
