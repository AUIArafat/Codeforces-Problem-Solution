#include<iostream>
using namespace std;
int main(){
    int W;
    cin>>W;
    if(W==2 || W&1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
