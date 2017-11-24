#include<iostream>
using namespace std;
int main(){
    string S,S1;
    int T;
    cin>>T;
    while(T--){
        cin>>S;
        if(S.size()<=10)
            cout<<S<<endl;
        else {
            cout<<S[0];
            cout<<S.size()-2;
            cout<<S[S.size()-1];
            cout<<endl;
        }
    }
}
