#include<iostream>
using namespace std;
int main(){
    int N, result=0;
    string S;
    cin>>N;
    while(N--){
        cin>>S;
        if(S=="Tetrahedron")
            result += 4;
        else if(S=="Cube")
            result += 6;
        else if(S=="Octahedron")
            result += 8;
        else if(S=="Dodecahedron")
            result += 12;
        else if(S=="Icosahedron")
            result += 20;
    }
    cout<<result<<endl;
}
