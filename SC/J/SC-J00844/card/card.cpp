//完了 BBQL
#include<bits/stdc++.h>
using namespace std;
int g[500011];
int a[500011];
int pre[400011];
int f[500011][3];
int h[500011];
int ans[5000011];
int idx=0;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		g[i]=10000001;
	}
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(pre[a[i]]!=0)
		{
			g[pre[a[i]]]=i-1;
		}
		pre[a[i]]=i; 
	}
	/*for(int i=1;i<=n;i++)
	{
		cout<<g[i]<<endl;
	}*/
	for(int i=n;i>=1;i--)
	{
		if(g[i]==10000001)
		{
			f[i][1]=i+1;
			f[i][2]=a[i];
		}
		else
		{
			f[i][1]=f[g[i]][1];
			f[i][2]=0;
		}	
	}
	/*for(int i=1;i<=n;i++)
	{
		cout<<f[i][1]<<" "<<f[i][2]<<endl;
	}*/
	for(int i=1;i<=n;i++)
	{
		h[f[i][1]]+=(h[i]+1);
		h[i]++;
		if(f[i][2]!=0)
		{
			ans[f[i][2]]+=h[i];
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<" ";
	}
	/*for(int i=1;i<=n;i++)
	{
		cout<<h[i]<<endl;
	}*/
}