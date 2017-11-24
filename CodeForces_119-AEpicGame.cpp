#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
void solve(){
    int a,b,n;
    cin>>a>>b>>n;
    int temp;
    while(n>0){
        temp = __gcd(a,n);
        n = n-temp;
        if(n==0){
            cout<<0<<endl;
            return;
        }
        if(n>0){
            temp = __gcd(b,n);
            n = n-temp;
            if(n==0){
                cout<<1<<endl;
                return;
            }
        }
    }
}
int main(){
    solve();
}
