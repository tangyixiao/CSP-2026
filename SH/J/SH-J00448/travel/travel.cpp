#include<bits/stdc++.h>
using namespace std;
string ca,sa,cb,sb;
bool check()
{
	if((sa[2]=='A'||sa[2]=='B'||sa[2]=='C')&&(sb[2]=='A'||sb[2]=='B'||sb[2]=='C'))
	{
		return true;
	}
	if((sa[2]=='D'||sa[2]=='E')&&(sb[2]=='D'||sb[2]=='E'))
	{
		return true;
	}
	return false;
}
bool checko()
{
	char a=sa[2];
	char b=sb[2];
	if((a=='A'&&b=='B')||(a=='B'&&b=='C')||(a=='D'&&b=='F')) return true;
	if((b=='A'&&a=='B')||(b=='B'&&a=='C')||(b=='D'&&a=='F')) return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//freopen("travel5.in","r",stdin);
	//freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>ca>>sa>>cb>>sb;
	if(ca==cb) cout<<"1";
	else
	{
		cout<<"0000";
		return 0;
	}
	bool flag=true;
	for(int i=0;i<2;i++)
	{
		if(sa[i]!=sb[i]) flag=false;
	}
	if(flag) cout<<"1";
	else
	{
		cout<<"000";
		return 0;
	}
	if(check()) cout<<"1";
	else
	{
		cout<<"00";
		return 0;
	}
	if(checko())
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	return 0;
 } 
