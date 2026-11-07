#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
bool f1=0,f2=0,f3=0,f4=0;
int main(){
	string ans;
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	s1=" "+s1,s2=" "+s2;
	if(c1==c2)
		ans+="1";
	else ans+="0",f1=1;
	if(s1[1]!=0||s2[1]!=0){
		if(s1[1]==s2[1]&&
		s1[2]==s2[2]&&!f1)
			ans+="1";
		else ans+="0",f2=1;
	}
	if(((s1[3]=='A'&&s2[3]=='B')||
		(s2[3]=='A'&&s1[3]=='B')||
		(s1[3]=='B'&&s2[3]=='C')||
		(s2[3]=='B'&&s1[3]=='C')||
		(s1[3]=='A'&&s2[3]=='C')||
		(s2[3]=='A'&&s1[3]=='C')||
		(s1[3]=='D'&&s2[3]=='F')||
		(s2[3]=='D'&&s1[3]=='F'))&&!f1&&!f2)
			ans+="1";
	else ans+="0",f3=1;
	if(((s1[3]=='A'&&s2[3]=='B')||
		(s2[3]=='A'&&s1[3]=='B')||
		(s1[3]=='B'&&s2[3]=='C')||
		(s2[3]=='B'&&s1[3]=='C')||
		(s1[3]=='D'&&s2[3]=='F')||
		(s2[3]=='D'&&s1[3]=='F'))&&!f1&&!f2&&!f3)
			ans+="1";
	else ans+="0";
	cout<<ans;
	return 0; 
}

