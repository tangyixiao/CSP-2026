#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans="0000";
bool fun1(string a,string b)
{
	if((a=="A"||a=="B"||a=="C")&&(b=="A"||b=="B"||b=="C"))
	{
		return true;
	}
	if((a=="D"||a=="F")&&(b=="D"||b=="F"))
	{
		return true;
	}
	return false;
}
bool fun2(string a,string b)
{
	if(a=="A")
	{
		if(b=="B")
		{
			return true;
		}
	}
	if(a=="B")
	{
		if(b=="A"||b=="C")
		{
			return true;
		}
	}
	if(a=="C")
	{
		if(b=="B")
		{
			return true;
		}
	}
	if(a=="D")
	{
		if(b=="F")
		{
			return true;
		}
	}
	if(a=="F")
	{
		if(b=="D")
		{
			return true;
		}
	}
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	string b1=s1.substr(0,2),b2=s2.substr(0,2);
	string n1=s1.substr(2),n2=s2.substr(2);
	if(c1==c2)
	{
		ans[0]='1';
		if(b1==b2)
		{
			ans[1]='1';
			if(fun1(n1,n2))
			{
				ans[2]='1';
				if(fun2(n1,n2))
				{
					ans[3]='1';
				}
			}
		}
	}
	cout<<ans;
	return 0;
}