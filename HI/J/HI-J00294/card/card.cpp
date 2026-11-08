#include<bits/stdc++.h>
using namespace std;
int n,m,a[200010],cnt[200010],t[200010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(t[a[j]]==0) cnt[a[j]]++,t[a[j]]=1;;
			
		}
		for(int i=1;i<=n;i++) t[i]=0;
	}
	for(int i=1;i<=m;i++)
	cout<<cnt[i]<<" ";
	return 0;
}
