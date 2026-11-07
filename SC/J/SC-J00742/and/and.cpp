#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read()
{
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9')
		ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		x=x*10+(ch-'0');
		ch=getchar();
	}
	return f*x;
}
int n,m;
int a[200010];
int bans=0;
bool check(int x)
{
	int cnt=0;
	for(int i=1;i<=n;++i)
		if((a[i]&x)>=x)
			++cnt;
	//cout<<x<<" "<<cnt<<'\n';
	if(cnt>=m)
		return true;
	else return false;
}
void dfs(int x,int y,int cnt)
{
	if(x==n+1)
	{
		if(cnt>=m) bans=max(bans,y);
	}
	else
	{
		if(y==0) dfs(x+1,a[x],cnt+1);
		else dfs(x+1,(y&a[x]),cnt+1);
		dfs(x+1,y,cnt);
	}
	return; 
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read(),m=read();
	int mx=0;
	for(int i=1;i<=n;++i)
		a[i]=read(),mx=max(a[i],mx);
	if(n<=27)
	{
		dfs(1,0,0);
		cout<<bans;
		return 0;
		//25	
	}
	if(mx<=4)
	{
		if(check(4)==true) cout<<4;
		else if(check(3)==true) cout<<3;
		else if(check(2)==true) cout<<2;
		else if(check(1)==true) cout<<1;
		else cout<<0;
		return 0;
		//10
	}
	if(m==1)
	{
		cout<<mx;
		return 0;
		//5
	}
	if(m==n)
	{
		int aans=a[1];
		for(int i=1;i<=n;++i)
			aans=(aans&a[i]);
		cout<<aans;
		return 0;
		//5 
	}
	if(m==2)
	{
		int ans=1;
		for(int i=1;i<=n;++i)
			for(int j=i+1;j<=n;++j)
				ans=max(ans,(a[i]&a[j]));
		cout<<ans;
		return 0;
		//15
	}
	int l=0,r=1e10,mid,ans=0;
	while(l<=r)
	{
		mid=l+(r-l)/2;
		if(check(mid)==true)
		{
			ans=mid;
			l=mid+1;
		}
		else r=mid-1;
	}
	cout<<ans;
	return 0;
}