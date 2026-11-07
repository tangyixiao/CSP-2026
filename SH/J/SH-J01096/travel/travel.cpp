#include <bits/stdc++.h>
using namespace std;

string c1,c2,c3,c4;
string l="ABC";
string r="DF";

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3)
	{
		cout<<1;
	}
	else
	{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
		return 0;
	}
	string c5=c2.substr(0,2);
	string c6=c4.substr(0,2);
	if(c5==c6)
	{
		cout<<1;
		if(l.find(c2[c2.size()-1])!=string::npos&&l.find(c4[c4.size()-1])!=string::npos)
		{
			cout<<1;
			if(abs(c2[c2.size()-1]-c4[c4.size()-1])==1)
			{
				cout<<1;
				return 0;
			}
			else
			{
				cout<<0;
				return 0; 
			}
		}
		else if(r.find(c2[c2.size()-1])!=string::npos&&r.find(c4[c4.size()-1])!=string::npos)
		{
			cout<<1;
			cout<<1;
			return 0;
		}
		else
		{
			cout<<0;
			cout<<0;
			return 0;
		}
	}
	else
	{
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}
