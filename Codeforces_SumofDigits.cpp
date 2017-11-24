#include <cstdio>
#include <cstdlib>
#include <iostream>
#include<sstream>
#include<string.h>
using namespace std;

//char s[100100];
string s;
int main() {
	int n;
	cin>>s;
	stringstream ss;
	int cnt = 0;
	int value;
	while(s[1]){
        value = 0;
        for(int i=0;s[i];i++){
            value = value + (s[i] - '0');
        }
        ss << value;
        s = ss.str();
        ++cnt;
	}
	printf("%d\n",cnt);
	return 0;
}
