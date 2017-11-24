#include<iostream>
using namespace std;
int main(){
    int a,b,c,Sum = 0;
    cin>>a>>b>>c;
    for(int i=a;i>0;i--){
        Sum = 0;
        if(b>=2*i){
            if(c>=4*i){
                Sum = i + i*2 + 4*i;
                break;
            }
        }
    }
    cout<<Sum<<endl;
}
