#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N>1){
        if(N%1000==144){
            N/=1000;
        }
        else if(N%100==14){
            N/=100;
        }
        else if(N%10==1){
            N/=10;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
