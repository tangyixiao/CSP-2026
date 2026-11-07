#include<bits/stdc++.h>

using namespace std;

int n; 
int a;
char c[10000];
int main (){
	freopen("string.in","r","stdin");
	freopen("string.out","r","stdout");
	cin>> n;
	for(int i=1;i<=n;i++){
		cin>> a >> c[i];
		if(c[i]==c[i+1]) cout<< "0";
	}
	
	return 0;
} 
