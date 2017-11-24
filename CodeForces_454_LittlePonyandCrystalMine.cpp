#include<iostream>
using namespace std;
int main(){
  int N;
  cin>>N;
  for(int i=0;i<=N/2;i++){
    for(int j=0;j<(N/2-i);j++){
        cout<<"*";
    }
    for(int j=(N/2-i);j<=N/2;j++){
        cout<<"D";
    }
    for(int j=(N/2-i);j<N/2;j++){
        cout<<"D";
    }
    for(int j=N/2+1;j<(N-i);j++){
        cout<<"*";
    }
    cout<<endl;
  }
   for(int i=N/2-1;i>=0;i--){
    for(int j=0;j<(N/2-i);j++){
        cout<<"*";
    }
    for(int j=(N/2-i);j<=N/2;j++){
        cout<<"D";
    }
    for(int j=(N/2-i);j<N/2;j++){
        cout<<"D";
    }
    for(int j=N/2+1;j<(N-i);j++){
        cout<<"*";
    }
    cout<<endl;
  }
}
