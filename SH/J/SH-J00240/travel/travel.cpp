#include<bits/stdc++.h>
using namespace std;
int side[] = {1,1,1,2,2};
bool xl(string a,string b)
{
	if((a[2]=='B' or b[2]=='B') or (a[2]=='D' or b[2]=='D'))
		return true;
	return false;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
	{
		if(s1[0]==s2[0] && s1[1]==s2[1])
		{
			if(side[s1[2]-'A'] == side[s2[2]-'A'])
			{
				if(xl(s1,s2)==1)
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
		}
		else
		{
			cout<<"1000";
		}
	}
	else
	{
		cout<<"0000";
	}
}
}
