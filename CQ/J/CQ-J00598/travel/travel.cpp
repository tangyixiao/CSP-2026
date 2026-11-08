#include<bits/stdc++.h>
using namespace std;
bool on_the_left(string s)
{
	if(s[2]=='A'||s[2]=='B'||s[2]=='C')
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		cout<<"1";
		if(s1.substr(0,2)==s2.substr(0,2))
		{
			cout<<"1";
			if((on_the_left(s1)&&on_the_left(s2))||((!on_the_left(s1))&&(!on_the_left(s2))))
			{
				cout<<"1";
				if(s1[2]=='A'&&s2[2]=='B')
				{
					cout<<"1";
				}
				else if(s1[2]=='B'&&s2[2]=='A')
				{
					cout<<"1";
				}
				else if(s1[2]=='B'&&s2[2]=='C')
				{
					cout<<"1";
				}
				else if(s1[2]=='C'&&s2[2]=='B')
				{
					cout<<"1";
				}
				else if(s1[2]=='D'&&s2[2]=='F')
				{
					cout<<"1";
				}
				else if(s1[2]=='F'&&s2[2]=='D')
				{
					cout<<"1";
				}
				else
				{
					cout<<"0";
				}
			}
			else
			{
				cout<<"00";
			}
		}
		else
		{
			cout<<"000";
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
