#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int bigmod(int a, long long b, int M){
    if(b==0){
        return 1%M;
    }
    int x = bigmod(a,b/2, M);
    x = (x*x)%M;
    if(b%2==1)
        x = (x*a)%M;
    return x;
}
int main(){
    long long n;
    cin>>n;
    cout<<bigmod(1378, n, 10)<<endl;
}
