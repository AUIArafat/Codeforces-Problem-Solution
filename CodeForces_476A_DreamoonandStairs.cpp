#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int N, M, Moves;
    cin>>N>>M;
    if(M>N){
        cout<<-1<<endl;
        return 0;
    }
    Moves = (N+1)/2;
    while(Moves%M!=0)
        Moves++;
    cout<<Moves<<endl;
}
