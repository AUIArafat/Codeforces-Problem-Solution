#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N,a,b,c,s,mx=0;
    cin>>N>>a>>b>>c;
    for(int i=0;i<=N;i=i+a){
        for(int j=0;j<=N;j=j+b){
            s=N-(i+j);
            if(s>=0 && s%c==0){
                mx = max(i/a+j/b+s/c, mx);
            }
        }
    }
    cout<<mx<<endl;
}
