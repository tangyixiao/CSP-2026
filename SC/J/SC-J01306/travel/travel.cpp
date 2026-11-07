#include<bits/stdc++.h>
using namespace std;
set<char> a,b;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<1;
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	string s3="",s4="";
	s3+=s1[0];
	s3+=s1[1];
	s4+=s2[0];
	s4+=s2[1];
	if(s3==s4)
	{
		cout<<1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	char r1=s1[2],r2=s2[2];
	a.insert('A');
	a.insert('B');
	a.insert('C');
	b.insert('D');
	b.insert('F');
	if(a.find(r1)!=a.end()&&b.find(r2)!=b.end())
	{
		cout<<"00";
		return 0;
	}
	else if(a.find(r2)!=a.end()&&b.find(r1)!=b.end())
	{
		cout<<"00";
		return 0;
	}
	else
	{
		cout<<1;
	}
	if(b.find(r1)!=b.end()&&b.find(r2)!=b.end())
	{
		cout<<1;
		return 0;
	}
	else
	{
		int r3=r1-'A',r4=r2-'A';
		if(abs(r3-r4)==1)
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
	}
	return 0;
}