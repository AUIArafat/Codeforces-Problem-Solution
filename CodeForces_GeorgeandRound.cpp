#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int N, M, cnt=0, Value;
    cin>>N>>M;
    vector<int> A;
    vector<int> B;
    for(int i=0;i<N;i++){
        cin>>Value;
        A.push_back(Value);
    }
    for(int i=0;i<M;i++){
        cin>>Value;
        if(Value>=A[cnt] && cnt<N){
            ++cnt;
        }
    }
    cout<<N-cnt<<endl;
}
