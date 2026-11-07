#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,maxn=-0x3f3f3f3f,mmmmmmmmaxn=-1;
int a[224524];
int book[22];
map <int,int> mp;
bool cmp(int x,int y){return x>y;}
void dfs_20(int now,int sum,int mm)
{
	if(mm<=0 || book[now])
	{
		if(mm==0)
		{
			maxn=max(sum,maxn);
//			cout<<now<<' '<<maxn<<'\n';
		}
		return;
	}
	book[now]=true;
	for(int i=1;i<=n;i++) if(!book[i] && mm!=0) dfs_20(i,(sum & a[i]),mm-1);
	book[now]=false;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		mmmmmmmmaxn=max(mmmmmmmmaxn,a[i]);
		mp[a[i]]++;
	}
	if(n<=20)
	{
		for(int i=1;i<=n;i++) dfs_20(i,a[i],m-1);
		printf("%lld",maxn);
		exit(0);
	}
	sort(a+1,a+n+1,cmp);
	if(mmmmmmmmaxn<=3)
	{
		if(mp[3]>=m) puts("3");
		if(mp[3]+mp[2]>=m) puts("2");
		else puts("1");
		exit(0);
	}
	if(m==1){printf("%lld",a[1]);exit(0);}
	if(m==2) 
	{
		for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) if(i!=j) maxn=max(maxn,a[i]&a[j]);
		printf("%lld",maxn);exit(0);
	} 
	if(m==n)
	{
		maxn=a[1];
		for(int i=2;i<=n;i++) maxn&=a[i];
		printf("%lld",maxn);exit(0);
	} 
	else
	{
		maxn=a[1];
		for(int i=2;i<=m;i++) maxn&=a[i];
		printf("%lld",maxn);exit(0);
	}
//	for(int i=1;i<=n;i++) scanf("%lld",&a[i]),mp[i][m]=0;
//	for(int i=1;i<=n;i++) for(int j=1;j<=i;j++) mp[i][j]=max(mp[i-1][j-1],mp[i][j-1])
	return 0;
}