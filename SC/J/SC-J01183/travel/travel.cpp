#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n,m;
	string nn,mm;
	cin>>n>>nn>>m>>mm;
	if (n==m)
	{
		cout<<1;
		if (nn[0]==mm[0] && nn[1]==mm[1])
		{
			cout<<1;
			if (nn[2]<='C' && mm[2]<='C')
			{
				cout<<1;
				if (max(nn[2],mm[2])-min(nn[2],mm[2])==1)
					cout<<1;
				else
					cout<<0;
			}
			else if (nn[2]>='D' && mm[2]>='D')
			{
				cout<<1;
				if (max(nn[2],mm[2])-min(nn[2],mm[2])==2)
					cout<<1;
				else
					cout<<0;
			}
			else
			{
				cout<<0<<0;
			}
		}
		else
		{
			cout<<0<<0<<0;
		}
	}
	else
	{
		cout<<0<<0<<0<<0;
	}
	return 0;
}