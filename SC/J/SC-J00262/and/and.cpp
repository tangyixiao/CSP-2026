#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],ans=INT_MAX;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	reverse(a+1,a+n+1);
	for(int i=1;i<=m;i++)
	{
		ans=min(ans,a[i]);
	}
	printf("%d",ans);
	return 0;
}