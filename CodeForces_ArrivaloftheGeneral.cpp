#include<iostream>
using namespace std;
int main(){
    int n, mnValue = 100000, mxValue = 0, mnIndex, mxIndex;
    cin>>n;
    int A[10000];
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(A[i]<=mnValue){
            mnValue = A[i];
            mnIndex = i;
        }
        if(A[i]>mxValue){
            mxValue = A[i];
            mxIndex = i;
        }
    }
    if(mxIndex>mnIndex)
        cout<<(mxIndex-1)+(n-mnIndex)-1<<endl;
    else if(mxValue == mnValue)
        cout<<0<<endl;
    else
        cout<<(mxIndex-1)+(n-mnIndex)<<endl;

}
