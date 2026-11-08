#include<bits/stdc++.h>
using namespace std;
#define N 200005
int n,m,a[N];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	int ans=a[n-m+1];
	printf("%d",ans);
}
