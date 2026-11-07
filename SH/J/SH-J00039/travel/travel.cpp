#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int k1,k2,p1,p2;
char a1,a2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	k1=(c1[0]-48)*10+c1[1]-48;
	k2=(c2[0]-48)*10+c2[1]-48;
	p1=(s1[0]-48)*10+s1[1]-48;
	p2=(s2[0]-48)*10+s2[1]-48;
	a1=s1[2];
	a2=s2[2];
	if(k1!=k2)
	{
		cout<<"0000";
		return 0;
	}
	if(p1!=p2)
	{
		cout<<"1000";
		return 0;
	}
	if((a1>a2&&a1>='D'&&a2<='C')||(a1<a2&&a1<='C'&&a2>='D'))
	{
		cout<<"1100";
		return 0;
	}
	if((a1=='A'&&a2=='C')||(a1=='C'&&a2=='A'))
	{
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}
