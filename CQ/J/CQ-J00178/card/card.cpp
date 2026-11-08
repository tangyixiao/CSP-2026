#include<bits/stdc++.h>
using namespace std;
namespace did
{
	int n,m,a[500005],cnt[300005],w[500005];
	bool chk()
	{
		for(int i=1;i<n;i++) if(a[i]>a[i+1]) return 0;
		return 1;
	}
	int main()
	{
		freopen("card.in","r",stdin);
		freopen("card.out","w",stdout);
		cin>>n>>m;
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		if(chk())
		{
			a[n+1]=100000000;
			for(int i=1;i<=n;i++)
				if(a[i]<a[i+1]) printf("%d ",i);
			return 0;
		}
		for(int i=1;i<=n;i++)
		{
			int tp=0;
			bool imm[300005]={};
			for(int j=i;j<=n;j++)
			{
				if(imm[a[j]]) while(w[tp]!=a[j]) imm[w[tp]]=0,tp--;
				else w[++tp]=a[j],imm[a[j]]=1;
			}
			for(int j=1;j<=tp;j++) cnt[w[j]]++;
		}
		for(int i=1;i<=m;i++) printf("%d ",cnt[i]);
		return 0;
	}
}
int main()
{
	did::main();
	return 0;
}
/*
O(n^2/n),60
*/
