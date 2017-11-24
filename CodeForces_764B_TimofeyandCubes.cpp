#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long N, value, sz;
    cin>>N;
    vector<long long> V;
    for(int i=0;i<N;i++){
        cin>>value;
        V.push_back(value);
    }
    sz = V.size();
    for(int i=0;i<sz;i=i+2){
        swap(V[i], V[sz-1]);
        sz = sz-2;
    }
     for(int i=0;i<N;i++){
        cout<<V[i]<<" ";
    }
}
