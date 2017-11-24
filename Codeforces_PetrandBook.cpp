#include<iostream>
using namespace std;

int main(){
    int N,A[100000];
    cin>>N;
    int Sum = 0;
    int day = 0;
    for(int i=1;i<=7;i++)
        cin>>A[i];
    while(1){
        for(int i=1;i<=7;i++){
            Sum = Sum+A[i];
            if(Sum>=N){
                cout<<i<<endl;
                return 0;
            }
        }
    }
}
