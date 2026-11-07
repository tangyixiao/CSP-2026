#include <iostream>
using namespace std;
string c1,s1,c2,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int a,b,c,d;
	a=10*(c1[0]-'0')+(c1[1]-'0');
	b=10*(c2[0]-'0')+(c2[1]-'0');
	c=10*(s1[0]-'0')+(s1[1]-'0');
	d=10*(s2[0]-'0')+(s2[1]-'0');
	if (a!=b)
	{
	    cout<<"0000";
	    return 0;
	}
	if (c!=d)
	{
		cout<<"1000";
		return 0;
	}
	char x=s1[2],y=s2[2];
	bool f1=(x>='d'),f2=(y>='D');
	if (f1!=f2)
	{
		cout<<"1100";
		return 0;
	}
	if (abs(x-y)==1)
	{
		cout<<"1111";
		return 0;
	}
	cout<<"1110";
	return 0;
}
