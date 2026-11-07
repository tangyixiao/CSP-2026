#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	string c11,s11,c22,s22;
	int c1,c2,s1,s2,a,b;
	cin>>c11>>s11>>c22>>s22;
	if(c11[0]=='0') c1=c11[1]-'0';
	else c1=(c11[0]-'0')*10+(c11[1]-'0');
	if(c22[0]=='0') c2=c22[1]-'0';
	else c2=(c22[0]-'0')*10+(c22[1]-'0');
	if(s11[0]=='0') s1=s11[1]-'0';
	else s1=(s11[0]-'0')*10+(s11[1]-'0');
	if(s22[0]=='0') s2=s22[1]-'0';
	else s2=(s22[0]-'0')*10+(s22[1]-'0');
	if(s11[2]=='F') a=5;
	else a=s11[2]-'A'+1;
	if(s22[2]=='F') b=5;
	else b=s22[2]-'A'+1;
	bool flag=false;
	if(c1==c2) cout<<'1';
	else cout<<'0';
	if(c1==c2 && s1==s2)
	{
		flag=true;
		cout<<'1';
	}
	else cout<<'0';
	if(flag && (a>=4 && b>=4 || a<=3 && b<=3))
	{
		cout<<'1';
	}
	else
	{
		flag=false;
		cout<<'0';
	}
	if(flag && abs(a-b)==1)
	{
		cout<<'1';
	}
	else cout<<'0';
	return 0;
}
