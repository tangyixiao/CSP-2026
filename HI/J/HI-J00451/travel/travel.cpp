#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d;
char e,f;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>e>>c>>d>>f;
	if(a==c)
		cout<<'1';
	else
	{
		cout<<"0000";
		return 0;
	}
	if(b==d)
		cout<<'1';
	else
	{
		cout<<"000";
		return 0;
	}
	if(e=='A'&&f=='A'||e=='A'&&f=='B'||e=='A'&&f=='C'||e=='B'&&f=='A'||e=='B'&&f=='B'||e=='B'&&f=='C'||e=='C'&&f=='A'||e=='C'&&f=='B'||e=='C'&&f=='C'||e=='D'&&f=='D'||e=='D'&&f=='F'||e=='F'&&f=='D'||e=='F'&&f=='F')
		cout<<'1';
	else
	{
		cout<<"00";
		return 0;
	}
	if(e=='A'&&f=='B'||e=='B'&&f=='A'||e=='C'&&f=='B'||e=='B'&&f=='C'||e=='F'&&f=='D'||e=='D'&&f=='F')
		cout<<'1';
	else
		cout<<'0';
	return 0;
 } 
