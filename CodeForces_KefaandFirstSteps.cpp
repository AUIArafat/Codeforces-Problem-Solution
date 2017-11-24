#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N, cnt = 1;
    cin>>N;
    int  temp = 0;
    vector<long long> A(100000009);
    vector<long long>::iterator it;
    it = A.begin();
    for(int i=0;i<N;i++){
        cin>>A[i];
        //A.insert(it, i, A[i]);
    }
    for(int i=0;i<N;i++){
        if(A[i]<=A[i+1])
            ++cnt;
        else{
            if(cnt>=temp)
                temp = cnt;
            cnt = 1;
        }
    }
    cout<<temp<<endl;
}
