#include<iostream>
using namespace std;
bool isPrime(int N){
    if(N<=1)
        return false;
    if(N==2)
        return true;
    for(int i=2;i<=N/2;i++){\
        if(N%i==0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=1010;i++){
        if(!isPrime(n*i+1)){
            cout<<i<<endl;
            return 0;
        }

    }
}
