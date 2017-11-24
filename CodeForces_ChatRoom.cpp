#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
   string S = "hello";
   string str;
   int cnt = 0;
   cin>>str;
   for(int i=0;i<str.length();i++){
        if(S[cnt]==str[i])
            ++cnt;
   }
    if(cnt==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
