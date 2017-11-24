#include<iostream>
using namespace std;
int main(){
    int n , m , z, value, cnt=0;
    cin>>n>>m>>z;
    int arr[100000];
    for(int i=1;i<=z;i++){
        arr[i] = 0;
    }
    for(int i=1;m*i<=z;i++){
        arr[m*i] = 1;
    }
    for(int i=1;n*i<=z;i++){
        if(arr[n*i]==1)
            ++cnt;
    }
    cout<<cnt<<endl;
}
