#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int X1,Y1, X2,Y2, X3,Y3, X4,Y4;
    cin>>X1>>Y1;
    cin>>X2>>Y2;
    cin>>X3>>Y3;
    X4 = X3 + abs(X2-X1);
    Y4 = Y2 + abs(Y3-Y1);
    cout<<3<<endl;
    cout<<X4<<" "<<Y4-(2*abs(Y3-Y1))<<endl;
    cout<<X4-(2*abs(Y3-Y1))<<" "<<Y4<<endl;
    cout<<X4<<" "<<Y4<<endl;
}
