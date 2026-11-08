#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],pos[5000],o[5000];
bool f[5000];
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
		for(int j=i;j<=n;j++)
		{
			if(f[a[j]])
			{
				for(int k=pos[a[j]];k<j;k++)
				{
					f[a[k]]=0;
				}
			}
			f[a[j]]=1;
			pos[a[j]]=j;
		}
		for(int j=1;j<=m;j++)
		{
			if(f[j]) o[j]++;
			f[j]=0;
		} 
	}
	for(int i=1;i<=m;i++) cout<<o[i]<<" ";
	return 0;
}
