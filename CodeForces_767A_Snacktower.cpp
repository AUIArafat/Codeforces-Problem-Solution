#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[100000], arr1[100000], temp[100000], k;
    for(int i=0;i<N;i++){
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    sort(arr1, arr1+N);
    int j=N-1;
    for(int i=0;i<N;i++){
        if(arr1[j]<arr[i]){
            cout<<" "<<endl;
            temp[k]=arr[i];
        }
        else{

        }
    }
}
