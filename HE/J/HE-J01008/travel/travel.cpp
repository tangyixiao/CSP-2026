#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,c1,s1;
	cin>>c>>s>>c1>>s1;
	if(c==c1) cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(s[0]==s1[0]&&s[1]==s1[1]) cout<<"1";
	else{
		cout<<"000";
		return 0;
	} 
	bool flag=0,flag1=0;
	if(s[2]=='A'||s[2]=='B'||s[2]=='C') flag=1;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') flag1=1;
	if(flag==flag1) cout<<"1";
	else{
		cout<<"00";
		return 0;
	} 
	if((s[2]=='C'&&s1[2]=='D')||(s[2]=='D'&&s1[2]=='C')) cout<<"0";
	else if(abs((int)s[2]-(int)s1[2])==1) cout<<"1";
	else cout<<"0";
	return 0;
} 
