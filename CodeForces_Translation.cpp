#include<iostream>
#include<string.h>
using namespace std;

string Reverse(string S){
    string S1="";
    int j=0;
    for(int i=S.size()-1;i>=0;i--){
        S1= S1 + S[i];
        ++j;
    }
    return S1;
}
int main(){
    string S1, S2;
    cin>>S1>>S2;
    if(Reverse(S1)==S2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
