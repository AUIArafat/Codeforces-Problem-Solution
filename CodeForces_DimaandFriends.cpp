#include<iostream>
using namespace std;
int main(){
    int N, Sum = 0, count = 0, F;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>F;
        Sum = Sum + F;
    }
    for(int i=1;i<=5;i++){
        if((Sum+i)%(N+1)!=1)
            ++count;
    }
    cout<<count<<endl;
}
