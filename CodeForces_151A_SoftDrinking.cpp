#include<iostream>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int x,y,z, mn;
    x = (k*l)/nl;
    y = c*d;
    z = p/np;
    mn = min(min(x,y), z);
    cout<<(mn/n)<<endl;
}
