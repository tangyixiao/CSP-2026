#include<bits/stdc++.h>
using namespace std;
const int maxn=500000+10;
const int maxm=300000+10;
int n,m,a[maxn],cnt[maxn],ans[maxm],last[maxm];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]),cnt[i]=1,last[a[i]]=i;
	for(int i=1;i<=n;i++){
		ans[a[i]]+=cnt[i];
		cnt[last[a[i]]+1]+=cnt[i];
	}
	for(int i=1;i<=m;i++){
		if(i==m) printf("%d\n",ans[i]);
		else printf("%d ",ans[i]);
	}
	return 0;
}