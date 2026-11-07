#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int m,n;
	cin>>m>>n;
	long long a[10000]={},b[10000]={},cnt[10000]={};
	for(int i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		if(i==1){b[i]=a[i];}
		for(int j=1;j<i;j++)
		{
			if(a[i]!=a[i-j])
			{b[i]=a[i];}
			else
			{b[j]=b[i];}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(b[i]==i)cnt[i]++;
	}
	for(int i=1;i<=n;i++)
	{
		cout<<cnt[i]<<" ";
	}
	return 0;
}
