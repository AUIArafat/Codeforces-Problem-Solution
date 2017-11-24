#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    char S1[110],S2[110];
    cin>>S1;
    cin>>S2;
    int i=0;
    while(S1[i]!='\0'){
        if(S1[i]>='A' && S1[i]<='Z')
            S1[i] = S1[i] + 32;
        if(S2[i]>='A' && S2[i]<='Z')
            S2[i] = S2[i] + 32;
        i++;
    }
   cout<<strcmp(S1,S2)<<endl;

}
