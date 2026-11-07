#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(s1[2]=='D') s1[2]=='E';
	if(s2[2]=='D') s2[2]=='E';
	if(c1[1]!=c2[1]){
		cout<<"0000";
		return 0;
	}
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000";
		return 0;
	}
	if(!((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]=='E'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='E'))){
		cout<<"1100";
		return 0;
	}
	int s[2];
	s[0]=s1[2]-'0';
	s[1]=s2[2]-'0';
	if(s[1]-s[0]!=1){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
