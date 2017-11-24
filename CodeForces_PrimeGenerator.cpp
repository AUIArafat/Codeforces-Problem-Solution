#include<iostream>
using namespace std;
long long primeNumber(long long N){
    int flag=1;
    if(N==1){
        flag = 0;
        return flag;
    }
    for(int i=2;i<=N/2;++i){
        if(N%i==0){
            flag = 0;
            return flag;
        }
    }
    return flag;
}
int main(){
    int T;
    long long N,M;
    cin>>T;
    while(T--){
        cin>>N>>M;
        for(int i=N;i<=M;i++){
            if(primeNumber(i)==1)
                cout<<i<<endl;
        }
    }
}
