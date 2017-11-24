#include<iostream>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    int result = 0;
    for(int i=1;i<=N;i++){
        result = result + i*5;
        if(K+result>240){
            cout<<i-1<<endl;
            break;
        }
    }
    if((K+result)<=240){
            cout<<N<<endl;
        }
}
