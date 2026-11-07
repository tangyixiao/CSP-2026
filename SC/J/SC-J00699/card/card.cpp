#include<bits/stdc++.h>
using namespace std;
int n,m,a[500100],t[300100]={0},b[500100]={0},fl=0;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		t[a[i]]++;
		if(a[i]==a[i-1])
		{
			fl=1;
		}
	}
	if(fl==0)
	{
		for(int i=1;i<=n;i++)
		{
			b[a[i]]=i;
		}
		for(int i=1;i<=m;i++)
		{
			cout<<b[i]<<" "; 
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		t[a[i-1]]--;
		int k1=1;
		for(int j=i+1;j<=n;j++)
		{
			if(t[a[j]]>1)
			{
				int k=n+1,flag=0;
				while(k--)
				{
					if(a[k]==a[j])
					{
						flag++;
					}
					if(flag>=2)
					{
						break;
					}
				}
				k1=max(k-1,k1);
			}
		}
		for(int k2=k1;k2<=n;k2++)
		{
			if(t[k2]>=1)
			{
				b[k2]++;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}