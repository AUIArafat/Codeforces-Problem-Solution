#include<iostream>
#include<set>
using namespace std;
int main(){
    int cnt=0;
    set<char> ss;
    string S;
    cin>>S;
    for(int i=0;i<S.size();i++){
        ss.insert(S[i]);
    }
    if(ss.size()==1){
        cout<<1<<endl;
    }
    else if(S.size()%2==0){
        for(int i=0;i<(S.size()/2);i++){
            if(S[S.size()/2+i]==S[i])
                ++cnt;
        }
        if(cnt==S.size()/2)
            cout<<S.size()/2<<endl;
        else
            cout<<S.size()<<endl;
    }
    else
        cout<<S.size()<<endl;
}
