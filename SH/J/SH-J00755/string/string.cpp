#include<bits/stdc++.h>
using namespace std;

int read()
{
	int ret=0;
	char c=getchar();
	while(!isdigit(c)) c=getchar();
	while(isdigit(c))
	{
		ret=ret*10+(c-'0');
		c=getchar();
	}
	return ret;
}
const int N=200010;
int n;
int a[N];
char c[N];
unsigned long long s0[N];
unsigned long long s1[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	n=read();
	s0[0]=s1[n+1]=0;
	for(int i=1;i<=n;i++)
	{
		a[i]=read();
		s0[i]=s0[i-1]+a[i];
		scanf("%c",&c[i]);
	}
	for(int i=n;i>=1;i--) s1[i]=s1[i+1]+a[i];
	unsigned long long l=s0[n],ttl=(s0[n]>>1),ans=0;
	int i=1,j=n,k=1;
	while(i<j&&k<=ttl)
	{
		if(s0[i]<s1[j])
		{
			if(c[i]!=c[j]) ans+=min(s0[i],ttl)+1-k;
			k=s0[i]+1;
			i++;
		}
		else
		{
			if(c[i]!=c[j]) ans+=min(s1[j],ttl)+1-k;
			k=s1[j]+1;
			j--;
		}
	}
	printf("%lld",ans);
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
