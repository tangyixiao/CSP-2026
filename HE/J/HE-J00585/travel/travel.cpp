#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s;
	cin>>s;
	string n;
	cin>>n;
	string s1;
	cin>>s1;
	string m;
	cin>>m;
	if(s[0]==s1[0]&&s[1]==s1[1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if(s[0]==s1[0]&&s[1]==s1[1]&&n[0]==m[0]&&n[1]==m[1]){
		cout<<1;
	}
	else{
		cout<<0;
	}
	int pl=0;
	if(s[0]==s1[0]&&s[1]==s1[1]&&n[0]==m[0]&&n[1]==m[1]&&(n[2]=='A'||n[2]=='B'||n[2]=='C')&&(m[2]=='A'||m[2]=='B'||m[2]=='C')){
		cout<<1;
		pl=1;
	}
	else{
		cout<<0;
		pl=1;
	}
	if(s[0]==s1[0]&&s[1]==s1[1]&&pl==0&&n[0]==m[0]&&n[1]==m[1]&&(n[2]=='D'||n[2]=='F')&&(m[2]=='D'||m[2]=='F')){
		cout<<1;
	}
	else if(pl==0){
		cout<<0;
	}
	if(s[0]==s1[0]&&s[1]==s1[1]&&n[0]==m[0]&&n[1]==m[1]&&((n[2]+1==m[2])||m[2]+1==n[2])){
		if((n[2]=='C'&&m[2]=='D')||(m[2]=='C'&&n[2]=='D')){
			cout<<0;
		}
		else{
			cout<<1;
		}
	}
	else{
		cout<<0;
	}
	return 0;
}
