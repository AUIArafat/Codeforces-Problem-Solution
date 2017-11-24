#include<iostream>
using namespace std;
int main(){
    int N, Div;
    cin>>N;
    if(N&1){
        Div = (N-3)/2 + 1;
        cout<<Div<<endl;
        cout<<3<<" ";
        N=N-3;
    }
    else{
        Div = N/2;
        cout<<Div<<endl;
    }
    while(N>0){
        cout<<2<<" ";
        N=N-2;
    }
}
