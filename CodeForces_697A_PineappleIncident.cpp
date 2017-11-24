#include<iostream>
using namespace std;

void solve(){
    long long S, T, X, value=0;
    cin>>T>>S>>X;
    long long first = 1;
    long long last = X;
    long long n;
    if(T==X){
        cout<<"YES"<<endl;
        return;
    }
    while(first<=last){
        n = (first+last)/2;
        long long V = T+n*S;
        long long V1 = T+n*S+1;
        if(V==X){
            cout<<"YES"<<endl;
            return;
        }
        else if(V1==X){
            cout<<"YES"<<endl;
            return;
        }
        if(V<X){
            first = n+1;
        }
        else
            last = n-1;
    }
    cout<<"NO"<<endl;
}
int main(){
    std::ios_base::sync_with_stdio(0);
    solve();
}
