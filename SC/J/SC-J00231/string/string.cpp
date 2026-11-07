#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
int n;
int m[200005];
char a[200005];
long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		char p;
		scanf("%d",&m[i]);
		scanf("%c",&p);
		scanf("%c",&a[i]);
	}
	int i=1,j=n;
	while (i<=j)
	{
		int t=min(m[i],m[j]);
		if (a[i]!=a[j]) ans+=(t*1LL);
		int xt=m[i]-t,yt=m[j]-t;
		m[i]=xt,m[j]=yt;
		if (m[i]==0) i++;
		if (m[j]==0) j--;
		
	}
	printf("%lld",ans);
	return 0;
}