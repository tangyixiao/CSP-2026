#include <bits/stdc++.h>
using namespace std;
int n,m,a[500005],w[300005],pai[500005],h,s[300005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		h=0;
		for(int j=1;j<=m;j++)
			w[j]=0;
		for(int j=i;j<=n;j++)
		{
			if(w[a[j]]==0)
			{
				pai[++h]=a[j];
				w[a[j]]=h;
			}
			else
			{
				for(int k=w[a[j]]+1;k<=h;k++)
				{
					w[pai[k]]=0;
				}
				h=w[a[j]];
			}
		}
		for(int j=1;j<=h;j++)
		{
			s[pai[j]]++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<s[i]<<" ";
	}
	return 0;	
} 
