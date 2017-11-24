#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string A,B,C,D;
    cin>>A>>B>>C;
    int lenA,lenB,lenC;
    lenA = A.size();
    lenB = B.size();
    lenC = C.size();
    int cnt = 0;
    if((lenA+lenB)==lenC){
        D = A + B;
       sort(C.begin(), C.end());
       sort(D.begin(), D.end());
       if(C.compare(D)==0)
            cout<<"YES"<<endl;
       else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
