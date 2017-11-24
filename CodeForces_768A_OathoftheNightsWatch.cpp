#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int N, cnt=0;
    long long A[100000];
    cin>>N;
    for(int i=0;i<N;i++)
        cin>>A[i];
    sort(A, A+N);
    if(A[N-1]==A[0]){
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<N;i++){
        if(A[i]==A[0])
            ++cnt;
        if(A[i]==A[N-1])
            ++cnt;
    }

    cout<<N-cnt<<endl;
}
