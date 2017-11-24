#include<iostream>
#include<cmath>
using namespace std;
int main(){
    char Arr[100009];
    int n, a, b, cost = 0, temp_a, temp_b;
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        cin>>Arr[i];
    }
    if(Arr[a]==Arr[b])
        cout<<0<<endl;
    else
        cout<<1<<endl;

}
