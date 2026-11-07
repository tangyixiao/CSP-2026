#include <bits/stdc++.h>
using namespace std;
int a[500001],b[500001],c[500001];
bool t[500001],d;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,l;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		l=n;
		memset(a,true,sizeof(a));
		for(int j=i;j<=n;j++)
			b[j]=a[j];
		for(int j=1;j<=n;j++)
		{
			d=false;
			for(int k=i;k<=l;k++)
				if(a[j]==b[k])
				{
					d=true;
					for(int z=k+1;z<=l+1;z++)
						t[z]=true;
					l=k;
					k=n+1;
				}
			if(d==false&&t[l+1]==false)
			{
				l++;
				b[l]=a[l+i];
			}
		}
		for(int j=1;j<=l;j++)
		{
			c[b[j]]++;
		}
	}
	for(int i=1;i<=n;i++)
		cout<<c[i]<<" ";
	return 0;
}
