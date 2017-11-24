#include<iostream>
#include<cmath>
using namespace std;
int prime[1000006];
void seive(){
    for(int i=0;i<=1000006; i++)
        prime[i]=1;
    for(int i=4;i<=1000006; i=i+2)
        prime[i]=2;
    for(int i=3;i<sqrt(1000006);i++){
        if(prime[i]==1){
            for(int j=i*i;j<=1000006;j=j+i)
                prime[j]=2;
        }

    }
    prime[1] = 2;
    prime[0] = 2;

}

int main(){
    seive();
    int N, value;
    int K;
    int i = 0;
    cin>>N;
    if(N>=3)
        cout<<2<<endl;
    else{
        cout<<1<<endl;
    }
    if(N==1)
        cout<<1;
    else{
        for(int i=2;i<=N+1;i++){
            cout<<prime[i]<<" ";
        }
    }

}
