#include<iostream>
using namespace std;
int main(){
    long long N, K, cnt=0, flag=0;
    map<long long, long long> M;
    cin>>N>>K;
    for(long long  i=1;i<=sqrt(N);i++){
        if(N%i==0){
            ++cnt;
            M[i]=cnt;
        }
    }
    if(M.size())
    cout<<-1<<endl;
}
