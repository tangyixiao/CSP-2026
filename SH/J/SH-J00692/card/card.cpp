#include <bits/stdc++.h> 
using namespace std;
int a[2000010];
bool flag[2000010];
int b[2000010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	bool flag=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		b[a[i]]++;
		if(a[i]>a[i+1])
		{
			flag=1;
		}
	}
	b[a[n]]=n;
	if(flag==1)
	{
		for(int i=1;i<=m;i++)
		{
			cout<<b[i]<<" ";
		}
	}
	else
	{
		for(int i=1;i<n;i++)
		{
			if(a[i]!=a[i+1])
			{
				cout<<i<<" ";
				while(true)
				{
					a[i]++;
					if(a[i]==a[i+1])
					{
						break;
					}
					cout<<0<<" ";
				}
			}
		}
		cout<<n;
	}
}
