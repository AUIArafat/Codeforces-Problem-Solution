#include<iostream>
#include<cstdlib>
using namespace std;

int compare (const void *elem1, const void *elem2){
    return *(int*)elem1 - *(int*)elem2;
}

int main(){
    int S[10];
    cin>>S[0];
    int cnt = 0;
    int j=0;
     for(int i=1;i<4;i++)
        cin>>S[i];
    qsort(S, 4, sizeof(int), compare);
    for(int i=1;i<4;i++){
        if(S[j]==S[i])
            ++cnt;
            j++;
    }
    cout<<cnt<<endl;
}
