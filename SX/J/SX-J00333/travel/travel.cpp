#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const int N = 1e6+5;
string a,b,a1,b1;
int main() 
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>a1>>b1;
	string s=b.substr(2,1);
	string s1=b1.substr(2,1);
	if(a==a1) cout<<"1";
	else 
	{
		cout<<"0000";
		return 0;
	}
	if(b.substr(0,2)==b1.substr(0,2)) cout<<"1";
	else 
	{
		cout<<"000";
		return 0;
	}
	if(((s>="A"&&s<="C")&&(s1>="A"&&s1<="C"))||(s=="D"&&s1=="F")||(s=="F"&&s1=="D")) cout<<"1";
	else 
	{
		cout<<"00";
		return 0;
	}
	if((s=="D"&&s1=="F")||(s=="F"&&s1=="D"))
	{
		cout<<"1";
		return 0;
	} 
	else
	{
		if((s=="A"&&s1=="B")||(s1=="A"&&s=="B")) 
		{
			cout<<"1";
			return 0;
		}
		else 
		{
			if((s=="C"&&s1=="B")||(s1=="C"&&s1=="B"))
			{
				cout<<"1";
			    return 0;
			}
			else
			{
				if(s=="B"||s1=="B")
		        {
			        if(s1=="A"||s1=="C") 
			        {
						cout<<"1";
						return 0;
					}
					else 
					{
					    if(s1=="B")
						{
							if(s=="A"||s=="C") 
							{
								cout<<"1";
								return 0;
							}
							else 
							{
								cout<<"0";
								return 0;
							}
						}
					}
				}
				else 
				{
					cout<<"0";
					return 0;
				}
			}
		}
	}
	return 0;
}
