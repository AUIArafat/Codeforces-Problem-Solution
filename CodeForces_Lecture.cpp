#include<iostream>
#include<map>
using namespace std;
int main(){
    int N, M;
    string a,b,S;
    cin>>N>>M;
    map<string,string> MAP;
    for(int i=0;i<M;i++){
        cin>>a>>b;
        MAP[a] = b;
    }
    for(int i=0;i<N;i++){
        cin>>S;
        if(MAP[S].size()<S.size())
            cout<<MAP[S]<<" ";
        else if(MAP[S].size()==S.size())
            cout<<S<<" ";
        else
            cout<<S<<" ";
    }
}
