#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],ans[500005],p[500005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i],p[a[i]]=i;
	for (int i=1;i<=n;i++)
	{
		bool bj[500005]={};
		for (int j=1+(i-1);j<=n;j++)
		{
			ans[a[j]]++;
			if (p[a[j]]>=j) j=p[a[j]];
		}
	}
	for (int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
