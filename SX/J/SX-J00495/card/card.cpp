#include<bits/stdc++.h>
using namespace std;
long long n,m,arr[500005],brr[500005],tot,tong[500005],nn;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
		if(arr[i]<=arr[i-1]&&n==0) nn=1;
	}
	if(nn==1)
	{
		for(int i=1;i<=n;i++)
		{
			tot=0;
			for(int j=i;j<=n;j++)
			{
				for(int k=1;k<=tot;k++)
				{
					if(arr[j]==brr[k])
					{
						tot=k-1;
						break;
					}
				}
				brr[++tot]=arr[j];
			}
			for(int j=1;j<=tot;j++) tong[brr[j]]++;
		}
		for(int i=1;i<=m;i++) cout<<tong[i]<<" ";
	}
	else
	{
		for(int i=1;i<=m;i++) cout<<i<<" ";
	}
	return 0;
}