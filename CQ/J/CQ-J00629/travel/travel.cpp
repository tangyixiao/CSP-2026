#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long c1,c2,p1,p2;
char kg;
long long gd(char x)
{
	if(x<'D')return 1;
	return 0;
}
int cnt;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	cin>>kg;
	cin>>p1;
	cin>>s1;
	cin>>kg;
	cin>>c2;
	cin>>kg;
	cin>>p2;
	cin>>s2;
	if(c1==c2)
	{
		cout<<"1";
		if(p1==p2)
		{
			cout<<"1";
			if(gd(s1[3])==gd(s2[3]))
			{
				cout<<"1";
				if(!(s1[3]=='A'&&s2[3]=='C'||s1[3]=='C'&&s2[3]=='A'))
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
			else
			{
				cout<<"00";
			}
		}
		else
		{
			cout<<"000";
			return 0;
		}
	}
	else
	{
		cout<<"0000";
		return 0;
	}
}

