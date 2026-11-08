#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1)
	{
		cout<<"1";
		if(a2[0]*10+a2[1]==b2[0]*10+b2[1])
		{
			cout<<"1";
			if((a2[2]<='C' && b2[2]<='C') || (a2[2]>='D' && a2[2]<='F' && b2[2]>='D' && b2[2]<='F'))
			{
				cout<<"1";
				if(a2[2]<='C' && b2[2]<='C')
				{
					if(a2[2]+1==b2[2] || a2[2]-1==b2[2])
					{
						cout<<"1";
					}
					else
					{
						cout<<"0";
					}
				}
				else if(a2[2]>='D' && a2[2]<='F' && b2[2]>='D' && b2[2]<='F')
				{
					cout<<"1";
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
