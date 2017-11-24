#include<iostream>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int cnt = 0;
    for(int i=0;i<=N;i++){
        for(int j=0;j<=M;j++){
            if((i*i+j)==N && (i+j*j)==M)
                ++cnt;
        }
    }
    cout<<cnt<<endl;
}
