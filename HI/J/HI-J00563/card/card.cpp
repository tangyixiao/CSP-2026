#include<bits/stdc++.h>
using namespace std;
int a[29999];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	int d[m]={};
	for(int i=1;i<=n;i++)
	{
		long long s=0;
		int b[29999]={};
		int c=1;
		for(int j=i;j<=n;j++)
		{
			bool f=1;
			int h;
			for(int k=1;k<=n;k++)
			{
				if(b[k] == a[j])
				{
					f=0;
					h=k;
					break;
				}
			}
			if(f == 1)
			{
				b[c]= a[j];
			}
			else
			{
				for(int k=h+1;k<=n;k++)
				{
					b[k]=0;
				}
			} 
		}
		for(int j=1;j<=n;j++)
		{
			for(int k=1;k<=n;k++)
			{
				if(b[k] == a[j])
				{
					d[b[k]]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout << d[i] << " ";
	}
	return 0;
}
