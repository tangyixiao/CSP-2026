#include<bits/stdc++.h>
using namespace std;
int n,m,r,a[200005],f[100005],t[100005],s[100005];
int main()
{
	cin>>n>>m;
	for(int j=1;j<=n;j++)
	cin>>a[j];
	for(int i=1;i<=n;i++)
	{
		int r=0;
		for(int j=i;j<=n;j++)
		{
			if(t[a[j]]==1)
			{
				f[j]++;
				for(int k=1;k<=n;k++)
				if(a[k]==a[j]&&f[k]!=-1)
				{
					f[k]--;
					break;
				}
			}
			t[a[j]]=1;
		}
		for(int j=i;j<=n;j++)
		{
			r+=f[j];
			f[j]=0;
			if(r>=0)s[a[j]]++;
			t[j]=0;
		}
	}
	for(int i=1;i<=m;i++)cout<<s[i]<<' ';
}
