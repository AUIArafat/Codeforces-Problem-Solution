#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
    long long r,X1,Y1, X2,Y2, X, Y, result;
    cin>>r>>X1>>Y1>>X2>>Y2;
    X = (X1-X2)*(X1-X2);
    Y = (Y1-Y2)*(Y1-Y2);
    result = ceil((sqrt(X+Y))/(2*r));
    printf("%I64d\n", result);
}
