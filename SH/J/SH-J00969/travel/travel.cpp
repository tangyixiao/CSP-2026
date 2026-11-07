#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	long long a,b;
	string s,d;
	cin>>a>>s>>b>>d;
	if(a==b)cout<<1;
	else cout<<0;
	if(s[0]==d[0]&&s[1]==d[1]&&(a==b))cout<<1;
	else cout<<0;
	if(s[0]==d[0]&&s[1]==d[1]&&(a==b)){
		if((s[2]=='A'||s[2]=='B'||s[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))cout<<1;
		else if((s[2]=='D'||s[2]=='F')&&(d[2]=='D'||d[2]=='F'))cout<<1;
		else cout<<0;
	}
	else cout<<0;
	if(s[0]==d[0]&&s[1]==d[1]&&(a==b)){
		if((s[2]=='A'||s[2]=='B')&&(d[2]=='A'||d[2]=='B'))cout<<1;
		else if((s[2]=='B'||s[2]=='C')&&(d[2]=='B'||d[2]=='C'))cout<<1;
		else if((s[2]=='D'||s[2]=='F')&&(d[2]=='D'||d[2]=='E'))cout<<1;
		else cout<<0;
	}
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
