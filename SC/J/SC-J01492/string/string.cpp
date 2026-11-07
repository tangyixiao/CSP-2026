#include<iostream>
#include<cstdio>
using namespace std;
const int N=2e7+20;
int n;
long long ans,len;
int ai[20010];
char c[20010],l[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>ai[i]>>c[i];
		for(int j=1;j<=ai[i];j++)
		 l[i]=c[i];
		len+=ai[i];
	}
		
	bool b=1;
	for(int i=1;i<n;i++)
		if(c[i] !=c[i-1])b=0;
	if(b)
	{
		printf("0\n");
		return 0;
	}
	b=1;
	for(int i=1;i<=n;i++)
	{
		if(ai[i]!=ai[i+1])b=0;
	}
	if(b)
	{
		ans=n*ai[1]/2;
		printf("%d",ans);
		return 0;
	}
	for(int i=1;i<=len/2;i++)
	{
		if(l[i]!=l[len-i+1])ans++;
	}
	printf("%d",ans);
	return 0;
}