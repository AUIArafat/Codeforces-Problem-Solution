#include<iostream>
using namespace std;
int main(){
    int n, x, count = 0, bitXor;
    int A[100000 + 10];
    cin>>n;
    cin>>x;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    for(int i=1;i<=n/2;i++){
        for(int j=2;j<=n;j++){
            bitXor = A[i]^A[j];
            if(bitXor==x){
                ++count;
            }
        }
    }
    cout<<count<<endl;
}

