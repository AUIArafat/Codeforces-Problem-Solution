#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string vic1, vic2, M, V;
    int n, temp;
    cin>>vic1>>vic2;
    cin>>n;
    temp = n;
    vector<string> Vic;
    Vic.push_back(vic1);
    Vic.push_back(vic2);
    while(temp!=0){
        if(n==temp){
            cout<<vic1<<" "<<vic2<<endl;
            cin>>M>>V;
            for(int i=0;i<Vic.size();i++){
                if(Vic[i]==M){
                    Vic.erase(remove(Vic.begin(), Vic.end(), Vic[i]), Vic.end());
                    Vic.push_back(V);
                    break;
                }
                else if(Vic[i]==V){
                    Vic.erase(remove(Vic.begin(), Vic.end(), Vic[i]), Vic.end());
                    Vic.push_back(M);
                    break;
                }
            }
            cout<<Vic[0]<<" "<<Vic[1]<<endl;
        }
        else{
        cin>>M>>V;
        for(int i=0;i<Vic.size();i++){
                if(Vic[i]==M){
                    Vic.erase(remove(Vic.begin(), Vic.end(), Vic[i]), Vic.end());
                    Vic.push_back(V);
                    break;
                }
                else if(Vic[i]==V){
                    Vic.erase(remove(Vic.begin(), Vic.end(), Vic[i]), Vic.end());
                    Vic.push_back(M);
                    break;
                }
            }
            cout<<Vic[0]<<" "<<Vic[1]<<endl;
        }
        --temp;
    }
}
