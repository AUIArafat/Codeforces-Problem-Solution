#include<iostream>
using namespace std;
int main(){
    char A[4+10][4+10];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cin>>A[i][j];
        }
    }
    //horizontal...
    if(A[0][0]=='x' && A[0][1]=='x' && A[0][2]=='.') cout<<"YES"<<endl;
    else if(A[0][0]=='.' && A[0][1]=='x' && A[0][2]=='x') cout<<"YES"<<endl;
    else if(A[0][0]=='x' && A[0][1]=='.' && A[0][2]=='x') cout<<"YES"<<endl;

    else if(A[0][1]=='x' && A[0][2]=='x' && A[0][3]=='.') cout<<"YES"<<endl;
    else if(A[0][1]=='.' && A[0][2]=='x' && A[0][3]=='x') cout<<"YES"<<endl;
    else if(A[0][1]=='x' && A[0][2]=='.' && A[0][3]=='x') cout<<"YES"<<endl;


    else if(A[1][0]=='x' && A[1][1]=='x' && A[1][2]=='.') cout<<"YES"<<endl;
    else if(A[1][0]=='.' && A[1][1]=='x' && A[1][2]=='x') cout<<"YES"<<endl;
    else if(A[1][0]=='x' && A[1][1]=='.' && A[1][2]=='x') cout<<"YES"<<endl;

    else if(A[1][1]=='x' && A[1][2]=='x' && A[1][3]=='.') cout<<"YES"<<endl;
    else if(A[1][1]=='.' && A[1][2]=='x' && A[1][3]=='x') cout<<"YES"<<endl;
    else if(A[1][1]=='x' && A[1][2]=='.' && A[1][3]=='x') cout<<"YES"<<endl;


    else if(A[2][0]=='x' && A[2][1]=='x' && A[2][2]=='.') cout<<"YES"<<endl;
    else if(A[2][0]=='.' && A[2][1]=='x' && A[2][2]=='x') cout<<"YES"<<endl;
    else if(A[2][0]=='x' && A[2][1]=='.' && A[2][2]=='x') cout<<"YES"<<endl;

    else if(A[2][1]=='x' && A[2][2]=='x' && A[2][3]=='.') cout<<"YES"<<endl;
    else if(A[2][1]=='.' && A[2][2]=='x' && A[2][3]=='x') cout<<"YES"<<endl;
    else if(A[2][1]=='x' && A[2][2]=='.' && A[2][3]=='x') cout<<"YES"<<endl;


    else if(A[3][0]=='x' && A[3][1]=='x' && A[3][2]=='.') cout<<"YES"<<endl;
    else if(A[3][0]=='.' && A[3][1]=='x' && A[3][2]=='x') cout<<"YES"<<endl;
    else if(A[3][0]=='x' && A[3][1]=='.' && A[3][2]=='x') cout<<"YES"<<endl;

    else if(A[3][1]=='x' && A[3][2]=='x' && A[3][3]=='.') cout<<"YES"<<endl;
    else if(A[3][1]=='.' && A[3][2]=='x' && A[3][3]=='x') cout<<"YES"<<endl;
    else if(A[3][1]=='x' && A[3][2]=='.' && A[3][3]=='x') cout<<"YES"<<endl;

    //Vertical...
    else if(A[0][0]=='x' && A[1][0]=='x' && A[2][0]=='.') cout<<"YES"<<endl;
    else if(A[0][0]=='.' && A[1][0]=='x' && A[2][0]=='x') cout<<"YES"<<endl;
    else if(A[0][0]=='x' && A[1][0]=='.' && A[2][0]=='x') cout<<"YES"<<endl;

    else if(A[1][0]=='x' && A[2][0]=='x' && A[3][0]=='.') cout<<"YES"<<endl;
    else if(A[1][0]=='x' && A[2][0]=='.' && A[3][0]=='x') cout<<"YES"<<endl;
    else if(A[1][0]=='.' && A[2][0]=='x' && A[3][0]=='x') cout<<"YES"<<endl;


    else if(A[0][1]=='x' && A[1][1]=='x' && A[2][1]=='.') cout<<"YES"<<endl;
    else if(A[0][1]=='x' && A[1][1]=='.' && A[2][1]=='x') cout<<"YES"<<endl;
    else if(A[0][1]=='.' && A[1][1]=='x' && A[2][1]=='x') cout<<"YES"<<endl;

    else if(A[1][1]=='x' && A[2][1]=='x' && A[3][1]=='.') cout<<"YES"<<endl;
    else if(A[1][1]=='x' && A[2][1]=='.' && A[3][1]=='x') cout<<"YES"<<endl;
    else if(A[1][1]=='.' && A[2][1]=='x' && A[3][1]=='x') cout<<"YES"<<endl;


    else if(A[0][2]=='x' && A[1][2]=='x' && A[2][2]=='.') cout<<"YES"<<endl;
    else if(A[0][2]=='x' && A[1][2]=='.' && A[2][2]=='x') cout<<"YES"<<endl;
    else if(A[0][2]=='.' && A[1][2]=='x' && A[2][2]=='x') cout<<"YES"<<endl;

    else if(A[1][2]=='x' && A[2][2]=='x' && A[3][2]=='.') cout<<"YES"<<endl;
    else if(A[1][2]=='x' && A[2][2]=='.' && A[3][2]=='x') cout<<"YES"<<endl;
    else if(A[1][2]=='.' && A[2][2]=='x' && A[3][2]=='x') cout<<"YES"<<endl;


    else if(A[0][3]=='x' && A[1][3]=='x' && A[2][3]=='.') cout<<"YES"<<endl;
    else if(A[0][3]=='x' && A[1][3]=='.' && A[2][3]=='x') cout<<"YES"<<endl;
    else if(A[0][3]=='.' && A[1][3]=='x' && A[2][3]=='x') cout<<"YES"<<endl;

    else if(A[1][3]=='x' && A[2][3]=='x' && A[3][3]=='.') cout<<"YES"<<endl;
    else if(A[1][3]=='x' && A[2][3]=='.' && A[3][3]=='x') cout<<"YES"<<endl;
    else if(A[1][3]=='.' && A[2][3]=='x' && A[3][3]=='x') cout<<"YES"<<endl;

    //Diagonal
    else if(A[0][0]=='x' && A[1][1]=='x' && A[2][2]=='.') cout<<"YES"<<endl;
    else if(A[0][0]=='x' && A[1][1]=='.' && A[2][2]=='x') cout<<"YES"<<endl;
    else if(A[0][0]=='.' && A[1][1]=='x' && A[2][2]=='x') cout<<"YES"<<endl;

    else if(A[1][1]=='x' && A[2][2]=='x' && A[3][3]=='.') cout<<"YES"<<endl;
    else if(A[1][1]=='x' && A[2][2]=='.' && A[3][3]=='x') cout<<"YES"<<endl;
    else if(A[1][1]=='.' && A[2][2]=='x' && A[3][3]=='x') cout<<"YES"<<endl;

    else if(A[3][0]=='x' && A[2][1]=='x' && A[1][2]=='.') cout<<"YES"<<endl;
    else if(A[3][0]=='x' && A[2][1]=='.' && A[1][2]=='x') cout<<"YES"<<endl;
    else if(A[3][0]=='.' && A[2][1]=='x' && A[1][2]=='x') cout<<"YES"<<endl;

    else if(A[2][1]=='x' && A[1][2]=='x' && A[0][3]=='.') cout<<"YES"<<endl;
    else if(A[2][1]=='x' && A[1][2]=='.' && A[0][3]=='x') cout<<"YES"<<endl;
    else if(A[2][1]=='.' && A[1][2]=='x' && A[0][3]=='x') cout<<"YES"<<endl;

    else if(A[2][0]=='x' && A[1][1]=='x' && A[0][2]=='.') cout<<"YES"<<endl;
    else if(A[2][0]=='x' && A[1][1]=='.' && A[0][2]=='x') cout<<"YES"<<endl;
    else if(A[2][0]=='.' && A[1][1]=='x' && A[0][2]=='x') cout<<"YES"<<endl;

    else if(A[3][1]=='x' && A[2][2]=='x' && A[1][3]=='.') cout<<"YES"<<endl;
    else if(A[3][1]=='x' && A[2][2]=='.' && A[1][3]=='x') cout<<"YES"<<endl;
    else if(A[3][1]=='.' && A[2][2]=='x' && A[1][3]=='x') cout<<"YES"<<endl;

    else if(A[1][0]=='x' && A[2][1]=='x' && A[3][2]=='.') cout<<"YES"<<endl;
    else if(A[1][0]=='x' && A[2][1]=='.' && A[3][2]=='x') cout<<"YES"<<endl;
    else if(A[1][0]=='.' && A[2][1]=='x' && A[3][2]=='x') cout<<"YES"<<endl;

    else if(A[0][1]=='x' && A[1][2]=='x' && A[2][3]=='.') cout<<"YES"<<endl;
    else if(A[0][1]=='x' && A[1][2]=='.' && A[2][3]=='x') cout<<"YES"<<endl;
    else if(A[0][1]=='.' && A[1][2]=='x' && A[2][3]=='x') cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}
