#include<iostream>
using namespace std;
int main(){
    string S;
    int cnt =0;
    cin>>S;
    for(int i=0;i<S.size()-1;i++){
        int flag = 0;
        for(int j=i+1;j<S.size();j++){
            if(S[i]==S[j])
            if(flag==0){
                ++cnt;
                flag = 1;
            }
        }
    }
    int result = S.size()-cnt;
    if(result%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}

//zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
