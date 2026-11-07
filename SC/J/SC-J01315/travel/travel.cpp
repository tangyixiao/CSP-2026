#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	char a11,a12,b1,a21,a22,b2;
	cin>>c1>>s1>>c2>>s2;
	a11=s1[0];
	a12=s1[1];
	a21=s2[0];
	a22=s2[1];
	b1=s1[2];
	b2=s2[2];
	if(c1==c2)
	{
		cout<<'1';
		if(a11==a21 && a12==a22)
		{
			cout<<'1';
			if(((b1=='A' || b1=='B' || b1=='C') && (b2=='A' || b2=='B' || b2=='C')) || ((b1=='D' || b1=='F') && (b2=='D' || b2=='F')))
			{
				cout<<'1';
				if((b1=='D' || b1=='F') && (b2=='D' || b2=='F'))
				{
					cout<<'1';
				}
				else
				{
					if(b1=='B' || b2=='B')
					{
						cout<<'1';
					}
					else
					{
						cout<<'0';
					}
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