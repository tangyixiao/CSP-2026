#include<bits/stdc++.h>
using namespace std;
const int maxn=200005;
int n,m,a[maxn];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	int num=a[1];
	if(n==m)
	{
		for(int i=2;i<=m;++i)
		{
			num=num&a[i];
		}
		printf("%d",num);
	}
	else if(m==1)
	{
		num=0;
		for(int i=1;i<=n;i++)
		{
			num=max(a[i],num);
		}
		printf("%d",num);
	}
	return 0;
}
