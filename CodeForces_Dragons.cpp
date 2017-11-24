#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    pair<int, int>A[n];
    for(int i=0;i<n;i++){
        cin>>A[i].first>>A[i].second;
    }
    sort(A, A+n);
    for(int i=0;i<n;i++){
        if(s>A[i].first){
            s = s + A[i].second;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
