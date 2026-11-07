#include <bits/stdc++.h>
using namespace std;

int c=pow(2,20)-1;
int n,m;
long long a[200010];
long long num,maxn=-1,ans=-1,tem,t=pow(2,20)-1,sum;
void solve1(long long a[],int g,int b,int i) {
	for(int r=i;r<g;r++)
	{
		t&=a[r];
		if(i<b-1)
		{
			solve1(a,n,m,i+1);
		}
		if(ans<t) ans=t;
	}
	printf("%lld\n",ans);
}
void solve2(int g) {
	for(int i=0;i<g;i++)
	{
		scanf("%lld",&num);
		if(maxn<num) maxn=num;
	}
	printf("%lld\n",maxn);
}
void solve3(int g) {
	for(int i=0;i<g;i++)
	{
		scanf("%lld",&num);
		ans&=num;
	}
	printf("%lld\n",ans);
}
void solve4(int g) {
	for(int i=0;i<g;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			tem=a[i]&a[j];
			if(tem>maxn) maxn=tem;
		}
	}
	printf("%lld\n",maxn);
}
void solve6(int g) {
	for(int i=0;i<g;i++)
	{
		scanf("%lld",&a[i]);
		sum+=a[i];
	}
	for(int i=0;i<g;i++)
	{
		if(maxn<(sum-a[i])%c) maxn=(sum-a[i])%c;
	}
	printf("%lld\n",maxn);
}
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	if(m==1)
	{
		solve2(n);
		exit(0);
	}
	if(m==n)
	{
		solve3(n);
		exit(0);
	}
	if(n<=2000&&m==2)
	{
		solve4(n);
		exit(0);
	}
	if(m==n-1)
	{
		solve6(n);
		exit(0);
	}
	if(n<=20)
	{
		for(int i=0;i<n;i++)
	    {
		    scanf("%lld",&a[i]);
		}
		solve1(a,n,m,0);
		exit(0);
	}
	return 0;
}
