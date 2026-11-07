#include <bits/stdc++.h>
using namespace std;
long long a,c;
bool f,z,x;
string b,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<"1";
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	string q=b.substr(0,2);
	string p=d.substr(0,2);
	if(q==p)
	{
		cout<<"1";
		f=1;
	}
	else
	{
		cout<<"000";
		return 0;
	}
	string w=b.substr(2,1);
	string o=d.substr(2,1);
	if(w=="A"||w=="B"||w=="C"&&f==1)
	{
		if(o=="B"||o=="C"||o=="A")
		{
			cout<<"1";
		}
		else
		{
			cout<<"00";
			return 0;
		}
	}
	else if(w=="F"&&f==1)
	{
		if(o=="D")
		{
			cout<<"1";
			z=1;
		}
		else
		{
			cout<<"00";
			return 0;
		}
	}
	else if(w=="D"&&f==1)
	{
		if(o=="F")
		{
			cout<<"1";
		}
		else
		{
			cout<<"00";
			return 0;
		}
	}
	else
	{
		cout<<"00";
		return 0;
	}
	int n=1;
	if(((w=="D"&&o=="F")||(w=="F"&&o=="D"))&&f==1)
	{
		cout<<"1";
		return 0;
	}
	else if(f==1)
	{
		if((w=="A"&&o=="B")||(w=="B"&&o=="A"))
		{
			cout<<"1";
			return 0;
		}
		else if((w=="B"&&o=="C")||(w=="C"&&o=="B"))
		{
			cout<<"1";
			return 0;
		}
	}
	else
	{
		cout<<0;
		return 0;
	}
	cout<<"0";
	return 0;
}
