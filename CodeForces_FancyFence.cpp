#include<iostream>
using namespace std;
int main(){
    int T,Angle, Result;
    cin>>T;
    while(T--){
        cin>>Angle;
        Result = Angle-180;
        if(360%Result==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
