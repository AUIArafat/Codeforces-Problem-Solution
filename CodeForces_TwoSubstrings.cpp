#include<iostream>
using namespace std;
int main(){
    string S;
    cin>>S;
    int flag=0, flag1=0;
    for(int i=0;i<S.size();i++){
        if((S[i]=='A' && S[i+1]=='B') && flag==0){
            i++;
        }
        else if((S[i]=='B' && S[i+1]=='A') && flag==1){
            flag=0;
            cout<<"YES"<<endl;
            return 0;
        }
    }
    for(int i=0;i<S.size();i++){
        if((S[i]=='B' && S[i+1]=='A') && flag1==0){
            i++;
        }
        else if((S[i]=='A' && S[i+1]=='B') && flag1==1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
