#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int N, value, table=0;
    cin>>N;
    vector<int> V1;
    vector<int>:: iterator it;
    vector<int> V2;
    for(int i=0;i<2*N;i++){
        cin>>value;
        V1.push_back(value);
    }
    V2.push_back(V1[0]);
    table = V2.size();
    for(int i=1;i<V1.size();i++){
    it = find (V2.begin(), V2.end(), V1[i]);
        if(it!=V2.end()){
            V2.erase(std::remove(V2.begin(), V2.end(), V1[i]), V2.end());
        }
        else{
            V2.push_back(V1[i]);
        }
        if(V2.size()>table)
            table = V2.size();
    }
    cout<<table<<endl;
}
