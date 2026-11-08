#include<iostream>
#include<string>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
	}
	else if(b[0]!=d[0] || b[1]!=d[1])
	{
		cout<<"1000";
	}
	else if((char(b[2])>=65 && char(b[2])<=67) && (char(d[2])>=65 && char(d[2])<=67))
	{
		if (char(b[2])+1==char(d[2]) || char(b[2])-1==char(d[2]))
		{
			cout<<"1111";
		}
		else
		{
			cout<<"1110";
		}
	}
	else if((char(b[2])>=68 && char(b[2])<=69) && (char(d[2])>=68 && char(d[2])<=69))
	{
		if (char(b[2])+1==char(d[2]) || char(b[2])-1==char(d[2]))
		{
			cout<<"1111";
		}
		else
		{
			cout<<"1110";
		}
	}
	else
	{
		cout<<"1100";
	}
	return 0;
}
