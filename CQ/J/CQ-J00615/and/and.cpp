#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;

long long a[N];
int num[N][32];
int mx=0;

bool f[N],ff;
int out=0;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		long long t=a[i];
		int c=0;
		while(t)
		{
			num[i][c]=(int)t&1;
			t>>=1;
			c++;
		}
		mx=max(mx,c-1);
	}
	
	
	for(int j=mx;j>=0;j--)//30
	{
		int c=0;
		for(int i=1;i<=n;i++)//2e5
		{
			if(f[i]) continue;
			if(num[i][j]) c++;
		}
		if(c<m) continue;
		for(int i=1;i<=n;i++) //2e5
		{
			if(f[i]) continue;
			if(!num[i][j]) f[i]=1,out++; 
		}
		if(out>=n-m) break;
	}
	
	int c=0;
	long long ans=(1<<31)-1;
	for(int i=1;i<=n;i++)
	{
		if(f[i]) continue;
		ans&=a[i];
		c++;
		if(c>=m) break;
	}
	
	printf("%lld",ans);
	
	
	return 0;
}
