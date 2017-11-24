#include<iostream>
using namespace std;
int main(){
    int A;
    cin>>A;
    int arr[100000];
    for(int i=0;i<A;i++){
        cin>>arr[i];
    }
    bool flag = false;
    bool flag1 = false;
    if(A%2==0){
        for(int i=0;i<(A/2);i++){
            if(arr[i+1]<arr[i]){
                flag = true;
                break;
            }
        }
        for(int i=(A/2)+1;i<A-1;i++){
            if(arr[i+1]>arr[i]){
                flag = true;
                break;
            }
        }
        if(flag==false && flag1==false)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    if(A%2!=0){
        cout<<"Helo"<<endl;
        for(int i=0;i<=(A/2)-1;i++){
            if(arr[i+1]<arr[i]){
                flag = true;
                cout<<"hhh1"<<endl;
                break;
            }
            cout<<arr[i]<<" ";
        }
        for(int i=(A/2)-1;i<=A-1;i++){
            if(arr[i+1]>arr[i]){
                flag = true;
                cout<<"hhh"<<endl;
                break;
            }
            cout<<arr[i]<<" ";
        }
        if(flag==false && flag1==false)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
