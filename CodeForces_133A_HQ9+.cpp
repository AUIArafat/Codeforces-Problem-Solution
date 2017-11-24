#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main(){
    char P[110];
    scanf("%s",P);
    int len = strlen(P);
    for(int i=0;i<len;i++){
        if(P[i]=='H' || P[i]=='Q' || P[i]=='9'){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}
