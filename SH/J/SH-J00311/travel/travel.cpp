#include<iostream>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,c,d;
	char e,f;
	cin>>a>>b>>e>>c>>d>>f;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	if(b!=d)
	{
		cout<<"1000";
		return 0;
	}
	if((e=='A'||e=='B'||e=='C')&&(f=='A'||f=='B'||f=='C')||(e=='D'||e=='F')&&(f=='D'||f=='F'))
	{
		if(e=='F'&&f=='D'||e=='D'&&f=='F')
		{
			cout<<"1111";
			return 0;
		}
		if(e=='A'&&f=='B'||e==b&&f=='A'||e=='B'&&f=='C'||e=='C'&&f=='B')
		{
			cout<<"1111";
			return 0;
		}
		cout<<"1110";
		return 0;
	}
	cout<<"1100";
	return 0;
}
