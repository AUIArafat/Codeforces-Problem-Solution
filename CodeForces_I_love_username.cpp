#include<iostream>
using namespace std;

int main(){
    int N, les = 10001, mx = 0;
    cin>>N;
    int value;
    int cnt = 0;
    cin>>value;
    les = value;
    mx = value;
    for(int i=1;i<N;i++){
      cin>>value;
        if(value<les){
            ++cnt;
            les = value;
        }
        else if(value>mx){
            ++cnt;
            mx = value;
        }
    }
    cout<<cnt<<endl;
}
