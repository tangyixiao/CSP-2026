#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,b1;
	char q,w;
	string a2,b2;
	cin>>a1>>a2>>b1>>b2;
	q=a2[2];
	w=b2[2];
	int e=q-w;
	if(a1==b1)
	{
		cout<<"1";
		if(a2[0]==b2[0] && a2[1]==b2[1])
		{
			cout<<"1";
			if(q==93 && w==95 || q<=92 && w<=92)
			{
				cout<<"1";
				if(e==-1 || e==1)
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
