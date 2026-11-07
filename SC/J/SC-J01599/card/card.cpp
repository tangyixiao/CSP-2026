#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],desk[300005],check[2][500005],l;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int game=0;game<n;game++)
	{
		l=0;
		for(int i=game;i<n;i++)
		{
			if(check[1][a[i]]==1)
			{
				for(int j=check[2][a[i]];j<l;j++)desk[i]=0;
				l=check[2][a[i]];
			}
			l++;
			desk[l-1]=a[i];
			check[1][a[i]]=1;
			check[2][a[i]]=i;
			for(int i=0;i<l;i++)cout<<desk[i]<<' ';
			cout<<'\n';
		}
			cout<<'\n';
		for(int i=0;i<l;i++)ans[desk[i]]++;
		for(int i=0;i<l;i++)desk[i]=0;
		for(int i=1;i<=m;i++)
		{
			check[1][i]=0;
			check[2][i]=0;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}