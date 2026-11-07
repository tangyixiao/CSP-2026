#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string m,n;
	cin>>a>>m>>b>>n;
	if(a==b) cout<<1;
		else cout<<0;
	if(m[0]==n[0]&&m[1]==n[1]) cout<<1;
		else cout<<0;
	if(m[0]==n[0]&&m[1]==n[1]){
		if(m[2]=='A'&&n[2]=='B'||m[2]=='B'&&n[2]=='A'||m[2]=='A'&&n[2]=='C'||m[2]=='C'&&n[2]=='A'||m[2]=='B'&&n[2]=='C'||m[2]=='C'&&n[2]=='B'||m[2]=='D'&&n[2]=='E'||m[2]=='E'&&n[2]=='D'){
			cout<<1;
		}
		else cout<<0;
	}
	if(m[0]==n[0]&&m[1]==n[1]&&(char(m[2])-char(n[2])==1||char(n[2])-char(m[2])==1)&&(m[2]!='C'&&n[2]!='D')&&(m[2]!='D'&&n[2]!='C')){
		cout<<1;
	}
	else cout<<0;
	return 0;
} 
