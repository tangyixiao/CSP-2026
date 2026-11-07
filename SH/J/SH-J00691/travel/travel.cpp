#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	ans="";
	if(c==cc) ans=ans+"1";
	else{
		ans="0000";
		cout<<ans;
		return 0; 
	}
	if(s[0]==ss[0]&&s[1]==ss[1]) ans=ans+"1";
	else{
		ans=ans+"000";
		cout<<ans;
		return 0;
	}
	if((s[2]<='C'&&ss[2]<='C')||(s[2]>='D'&&ss[2]>='D')) ans=ans+"1";
	else{
		ans=ans+"00";
		cout<<ans;
		return 0;
	}
	if((s[2]=='A'&&ss[2]=='B')||(s[2]=='B'&&ss[2]=='A')||(s[2]=='B'&&ss[2]=='C')||(s[2]=='C'&&ss[2]=='B')||(s[2]=='D'&&ss[2]=='F')||(s[2]=='F'&&ss[2]=='D')) ans=ans+"1";
	else{
		ans=ans+"0";
		cout<<ans;
		return 0;
	}
	cout<<ans;
	return 0;
}
