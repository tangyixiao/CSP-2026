#include <bits/stdc++.h>
using namespace std;
int main(){
	char c[15];
	for(int i=0;i<10;i++)  cin>>c[i];
	if(c[0]==c[5]&&c[1]==c[6]) cout<<1;
	else if(c[0]!=c[5]||c[1]!=c[6]){
		cout<<0<<0<<0<<0;
		return 0;	
	}
	if(c[2]==c[7]&&c[3]==c[8]) cout<<1;
	else if(c[2]!=c[7]||c[3]!=c[8]){
		cout<<0<<0<<0;
		return 0;
	}
	if(c[4]=='A'&&c[9]=='B'||c[4]=='B'&&c[9]=='A'||c[4]=='A'&&c[9]=='C'||c[4]=='C'&&c[9]=='A'||c[4]=='B'&&c[9]=='C'||c[4]=='C'&&c[9]=='B'||c[4]=='D'&&c[9]=='F'||c[4]=='F'&&c[9]=='D') cout<<1;
	else if(c[4]!='A'&&c[9]!='B'||c[4]!='B'&&c[9]!='A'||c[4]!='A'&&c[9]!='C'||c[4]!='C'&&c[9]!='A'||c[4]!='B'&&c[9]!='C'||c[4]!='C'&&c[9]!='B'||c[4]!='D'&&c[9]!='F'||c[4]!='F'&&c[9]!='D'){
		cout<<0<<0;
		return 0;
	}
	if(c[4]!='C'&&c[9]!='D'||c[4]!='D'&&c[9]!='C'&&abs(c[4]-'0'-c[9])==1) cout<<1;
	if(c[4]=='C'&&c[9]=='D'||c[4]=='D'&&c[9]=='C'||abs(c[4]-'0'-c[9])!=1) cout<<0;
	return 0;
}