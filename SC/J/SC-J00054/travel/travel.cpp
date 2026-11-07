#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
string s,ss;
int flag;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	else cout<<1;
	for(int i=0;i<2;i++)
	{
		s+=s1[i];
		ss+=s2[i];
	}
	if(s==ss)
	cout<<1;
	else
	{
		cout<<"000";
		return 0;
	}
	if((s1[2]>='A' && s1[2]<='C' && s2[2]>='D' && s2[2]<='F') || (s2[2]>='A' && s2[2]<='C' && s1[2]>='D' && s1[2]<='F'))
	{
		flag=1;
		cout<<0;
	}
	else cout<<1;
	if(flag==1 || (s1[2]=='A' && s2[2]=='C') || (s1[2]=='C' && s2[2]=='A'))
	cout<<0;
	else cout<<1;
	return 0;
}