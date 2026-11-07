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
int n,m;
int a[N];
int s0[N];
int s1[N];
int ans1;
void dfs(int num,int cnt,int cur)
{
	if(num>n)
	{
		if(cnt!=m) return;
		ans1=max(ans1,cur);
		return;
	}
	if(m-cnt<n-num+1) dfs(num+1,cnt,cur);
	dfs(num+1,cnt+1,cur&a[num]);
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	if(m==1)
	{
		sort(a+1,a+n+1);
		printf("%d",a[n]);
		return 0;
	}
	if(m==2)
	{
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				ans=max(ans,a[i]&a[j]);
			}
		}
		printf("%d",ans);
		return 0;
	}
	if(m==n)
	{
		int ans=2147483647;
		for(int i=1;i<=n;i++)
		{
			ans=ans&a[i];
		}
		printf("%d",ans);
		return 0;
	}
	
	if(m==n-1)
	{
		s0[0]=2147483647;
		for(int i=1;i<=n;i++) s0[i]=s0[i-1]&a[i];
		s1[n+1]=2147483647;
		for(int i=n;i>=1;i--) s1[i]=s1[i+1]&a[i];
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			ans=max(ans,s0[i-1]&s1[i+1]);
		}
		printf("%d",ans);
		return 0;
	}
	if(n<=20)
	{
		ans1=0;
		dfs(1,0,2147483647);
		printf("%d",ans1);
	}
	bool f=1;
	for(int i=1;i<=n;i++)
	{
		int x=a[i]+1;
		if((x&-x)!=x)
		{
			f=0;
			break;
		}
	}
	if(f)
	{
		sort(a+1,a+n+1);
		printf("%d",a[n-m+1]);
	}
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
