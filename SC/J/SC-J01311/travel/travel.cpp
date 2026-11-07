#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (c1!=c2)
	{
		cout<<"0000";
		return 0;
	}
	else
	{
		cout<<"1";
		
		if (s1.substr(0,2)==s2.substr(0,2))
		{
			cout<<"1";
			if ((s1.substr(2)=="C" and s2.substr(2)=="D") or (s1.substr(2)=="D" and s2.substr(2)=="C"))
			{
				cout<<"00";
				return 0;
			}
			else
			{
				string n1=s1.substr(2);
				string n2=s2.substr(2);
				if ((n1=="A" and n2=="C") or (n1=="C" and n2=="A") or (n1=="A" and n2=="B") or (n1=="B" and n2=="A") or (n1=="D" and n2=="F") or (n1=="F" and n2=="D") or (n1=="C" and n2=="B") or (n1=="B" and n2=="C")) 
				{
					cout<<"1";
					if ((n1=="B" and n2=="A") or (n1=="A" and n2=="B") or (n1=="C" and n2=="B") or (n1=="B" and n2=="C") or (n1=="D" and n2=="F") or (n1=="F" and n2=="D")) 
					{
						cout<<"1";
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
					return 0;
				}
			}
		}
		else
		{
			cout<<"000";
			return 0;
		}
	}
	return 0;
}