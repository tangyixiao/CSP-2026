#include <bits/stdc++.h>
using namespace std;

int c1,c2;
string s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2)
	{
		cout<<1;
		string a,b,c,d;
		a=s1[0]+s1[1];
		b=s2[0]+s2[1];
		c=s1[s1.size()-1];
		d=s2[s2.size()-1];
		if (a==b)
		{
			cout<<1;
			if ((c=="A" && d=="B")||(c=="A" && d=="C") ||(c=="B" && d=="C")||(c=="D" && d=="F")||(d=="A" && c=="B")||(d=="A" && c=="C") ||(d=="B" && c=="C")||(d=="D" && c=="F"))
			{
				cout<<1;
				if ((c=="A" && d=="C")||(c=="C"&&d=="A") )
				{
					cout<<0;
				}
				else cout<<1;
			}
			else
			{
				cout<<"00";
				return 0;
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
	}
	return 0;
} 