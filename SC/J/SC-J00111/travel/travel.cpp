#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char a,b,c,d,e,f;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<'1';
	else 
	{
		cout<<'0'<<'0'<<'0'<<'0';
		return 0;
	}
	a=s1[0];
	b=s1[1];
	c=s2[0];
	d=s2[1];
	if(a==c&&b==d) cout<<'1';
	else 
	{
		cout<<'0'<<'0'<<'0';
		return 0;
	}
	e=s1[2];
	f=s2[2];
	if(e=='D'&&f=='F'||e=='F'&&f=='D'||e=='A'&&f=='B'||e=='B'&&f=='A'||e=='A'&&f=='C'||e=='C'&&f=='A'||e=='B'&&f=='C'||e=='C'&&f=='B') cout<<'1';
	else 
	{
		cout<<'0'<<'0';
		return 0;
	}
	if(e=='D'&&f=='F'||e=='F'&&f=='D'||e=='A'&&f=='B'||e=='B'&&f=='A'||e=='B'&&f=='C'||e=='C'&&f=='B') cout<<'1';
	else cout<<'0';
	return 0;
}