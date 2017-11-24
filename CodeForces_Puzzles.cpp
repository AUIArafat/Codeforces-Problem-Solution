#include<iostream>
#include<algorithm>
#define INF 2147483647
using namespace std;
int main(){
    int n,m, mn = INF;
    cin>>n>>m;
    int arr[10000];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr, arr+m);
    for(int i=n-1;i<m;i++){
        mn = min(mn, arr[i]-arr[i-n+1]);
    }
    cout<<mn<<endl;
}
