#include<iostream>
using namespace std;
int main(){
    int n,a,b,mx = 0, in =0, out, temp;
    cin>>n;
    while(n--){
        cin>>a>>b;
        in = in - a+b;
        if(in>=mx) mx = in;
    }
    cout<<mx<<endl;
}
