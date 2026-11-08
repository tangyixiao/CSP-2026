#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],vis[200001];
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	if(m==1) printf("%d",a[n]);
	else if(m==n)
	{
		int cnt=(1<<30)-1;
		for(int i=1;i<=n;i++) cnt=cnt&a[i];
		printf("%d",cnt);
	}
	else if(m==2)
	{
		int cnt=0;
		for(int i=1;i<=n;i++) for(int j=i+1;j<=n;j++) cnt=max(cnt,a[i]&a[j]);
		printf("%d",cnt);
	}
	else printf("%d",a[n-m+1]);
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
