#include<bits/stdc++.h>
using namespace std;
int m,n;
int a[10001];
int t[10001],to=0;
int ans[10001];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int l=1;l<=n;l++)
	{
		for(int i=1;i<=n;i++)
			t[i]=0;
		to=0;
		for(int i=l;i<=n;i++)
		{
			to++;
			t[to]=a[i];
			int k=-1;
			for(int j=1;j<to;j++)
			{
				if(t[j]==t[to])
				{
					k=j;
					break;
				}
			}
			if(k!=-1)
				to=k;
		}
		for(int i=1;i<=to;i++)
			ans[t[i]]++;		
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}