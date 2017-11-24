#include<iostream>
using namespace std;
int main(){
    string S,S1;
    cin>>S>>S1;
    if(S==S1)
        cout<<-1<<endl;
    else
        cout<<max(S.length(), S1.length())<<endl;
}
