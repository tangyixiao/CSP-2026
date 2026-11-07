#include<bits/stdc++.h>
#define int long long
#define mod 998244353
using namespace std;

int n,x,l,r,lx,rx,ans,cnt,sum,mid;
char c;

struct parts
{
	int s;
	int sq;
	int sh;
	char value;
}a[250000];

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>x>>c;
		if(c==a[cnt].value) a[cnt].s+=x;
		else
		{
			a[++cnt].value=c;
			a[cnt].s=x;
		}
	}
	for(int i=1;i<=cnt;++i) a[i].sq=a[i-1].sq+a[i].s;
	for(int i=cnt;i>=1;--i) a[i].sh=a[i+1].sh+a[i].s;
	sum=a[1].sh;
	for(int i=1;i<=cnt;++i)
	{
		if(a[i-1].sq>=sum/2) break;
		lx=a[i-1].sq+1;
		rx=min(a[i].sq,sum/2);
		l=i;
		r=cnt;
		while(l<=r)
		{
			mid=(l+r)/2;
			if(a[mid].sh<lx) r=mid-1;
			else l=mid+1;
		}
		for(int j=r;j>=i;--j)
		{
			if(a[j+1].sh>=rx) break;
			if(a[j].value==a[i].value) continue;
			ans+=(min(a[j].sh,rx)-max(a[j+1].sh+1,lx)+1);
		}
	}
	cout<<ans;
	return 0;
}














