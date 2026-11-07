#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int che[10];
	char a[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
	if(a[0][0]==a[1][0])
	{
		if(a[0][1]+'1'==a[1][1] || a[0][1]-'1'==a[1][1])
		{
			cout<<1111;
		}
		else
		{
			if(a[0][0]!=a[1][0])
			{
				cout<<"1000";
			}
			else
			{
				cout<<"1110";
			}
		}
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}
