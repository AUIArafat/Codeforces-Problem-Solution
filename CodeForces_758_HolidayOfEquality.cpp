#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int Arr[110], sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    sort(Arr, Arr+n);
    for(int i=0;i<n;i++){
        if(Arr[i]==Arr[n-1])
            continue;
        else
            sum = sum + (Arr[n-1]-Arr[i]);
    }
    cout<<sum<<endl;
}
