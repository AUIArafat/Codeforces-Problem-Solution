#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m, d;
    double result;
    cin>>m>>d;
    if(m==2){
        result = 28-(7-d+1);
        result = ceil(result/7) + 1;
        cout<<result<<endl;
    }
    else if(m%2==0 && m<=7){
        result = 30-(7-d+1);
        result = ceil(result/7) + 1;
        cout<<result<<endl;
    }
    else if(m%2!=0 && m<=7){
        result = 31-(7-d+1);
        result = ceil(result/7) + 1;
        cout<<result<<endl;
    }
     else if(m%2!=0 && m>=8){
        result = 30-(7-d+1);
        result = ceil(result/7) + 1;
        cout<<result<<endl;
    }
    else if(m%2==0 && m>=8){
        result = 31-(7-d+1);
        result = ceil(result/7) + 1;
        cout<<result<<endl;
    }
}
