#include<iostream>
using namespace std;
int main(){
    char S[100+10];
    string tempS;
    int i = 0;
    int flag = 0;
    cin>>S;
    tempS = S;
    if(S[i]>='a' && S[i]<='z'){
        S[0] = S[0] - 32;
        for(int i=1;S[i];i++){
           if(S[i]>='A' && S[i]<='Z'){
                S[i] = S[i] + 32;
                flag = 1;
           }
            else{
                cout<<tempS<<endl;
                return 0;
            }
        }
        cout<<S<<endl;
        return 0;
    }
    for(int i=0;S[i];i++){
       if(S[i]>='A' && S[i]<='Z')
            flag = 1;
        else{
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        for(int i=0;S[i];i++){
            S[i] = S[i]+32;
        }
        cout<<S<<endl;
    }
    else
        cout<<S<<endl;
}

