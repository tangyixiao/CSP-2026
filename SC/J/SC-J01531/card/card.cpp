#include<bits/stdc++.h>
using namespace std;
int a[1000000000],b[1000000000];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,k=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(n-k)
	{
	bool c[1000000000];
	for(int i=k+1;i<=n;i++)
	{
		if(c[i]==1)
		continue;
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				for(int z=i;z<j;z++)
				{
					c[z]=1;
				}
			}
		}
		
	}
	for(int i=k+1;i<=n;i++)
	{
		if(c[i]==0)
		{
			b[a[i]]++;
		}
	}
	k++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
} 