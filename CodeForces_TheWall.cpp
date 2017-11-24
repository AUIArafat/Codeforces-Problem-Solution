//not complete
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    int X,Y;
    long long A,B,Result=0;
    cin>>X>>Y;
    cin>>A>>B;
    Result = (X*Y)/__gcd(X,Y);
    cout<<B/Result-(A-1)/Result<<endl;
}


//********************************GCD & LCM**************
/*using namespace std;
int main(){
    int X,Y,sumX=0,sumY=0;
    long long A,B,Result=0,cnt=0;
    cin>>X>>Y;
    cin>>A>>B;
    while(Result<B){
        sumX = sumX + X;
        sumY = sumY + Y;
        Result = (sumX*sumY)/__gcd(sumX,sumY);
        ++cnt;
    }
    cout<<cnt<<endl;
}*/
//*************Brutforce************
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int X,Y;
    long long A,B;
    vector<long long> Arr;
    vector<long long> Brr;
    cin>>X>>Y;
    cin>>A>>B;
    long long cnt=0;
    for(long long  i=1;i<=B;i++){
        if(i*X>=A && i*X<=B){
            Arr.push_back(i*X);
        }
        if(i*Y>=A && i*Y<=B){
            Brr.push_back(i*Y);
        }
    }
    for(long long i=0;i<Arr.size();i++){
        for(long long j=0;j<Brr.size();j++){
            if(Arr[i]==Brr[j])
                ++cnt;
        }
    }
    cout<<cnt<<endl;
}
*/
