#include<bits/stdc++.h>
using namespace std;
int a[200010];
char b[200010];
int main()
{
	freopen("string.in",r,stdin);
	freopen("string.out",w,stdout);
	int n; scanf("%d",&n);
	long long s=0,ans=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d %c",&a[i],&b[i]);
		s+=a[i];
	}
	int x=1,y=n,n1=0,n2=0;
	for(int i=1;i<=s/2;i++)
	{
		int j=s-i+1;
		if(n1>a[x])
		{
			x++;
			n1=0;
		}
		if(n2>a[y])
		{
			y--;
			n2=0;
		}
		n1++;
		n2++;
		if(b[x]!=b[y]) ans++;
	}
	printf("%d",ans);
	return 0;
}

