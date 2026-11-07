#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
//	int c11,s11,c12,s12;
	bool is_ok=1;
	if(c1[0]==c2[0]&&c1[1]==c2[1])
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
		is_ok=0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&is_ok==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if((((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')))&&is_ok==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
	if(((s1[2]=='A'&&s2[2]=='B')||(s1[2]=='B'&&s2[2]=='A')||(s1[2]=='B'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='B')||(s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D'))&&is_ok==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0";
	}
//	if(c1==c2) cout<<"1"<<" ";
//	cout<<a;
	return 0;
}
