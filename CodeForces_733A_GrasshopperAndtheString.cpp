#include<iostream>
using namespace std;
int main(){
    string S;
    cin>>S;
    int cnt=0, mx=0, V=0;
    for(int i=0;i<=S.length();i++){
        if(S[i]==NULL || S[i]=='A' || S[i]=='a' || S[i]=='E' || S[i]=='e' || S[i]=='I' || S[i]=='i' || S[i]=='O' || S[i]=='o' || S[i]=='U' || S[i]=='u' || S[i]=='Y' || S[i]=='y'){
            ++cnt;
            //cout<<cnt<<endl;
            if(cnt>mx)
                mx = cnt;
            cnt=0;
        }
        else{
            ++cnt;
            if(cnt>mx) mx=cnt;
        }
    }
//    ABABBBACFEYUKOTT
    if(mx==0)
        cout<<S.length()+1<<endl;
    else cout<<mx<<endl;
}
