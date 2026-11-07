#include <bits/stdc++.h>
using namespace std;
const int NNN=200005;
long long n,l,r,xa,ya;
char c[NNN],x,y;
long long cnt,ans,sum[NNN],a[NNN];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","W",stdout);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
		sum[i]=sum[i-1]+a[i];
	}
	cnt=sum[n];
	if(cnt%2 == 0)
	{
		l=cnt/2;
		r=cnt/2+1;
	}
	else
	{
		l=cnt/2;
		r=cnt/2+2;
	}
	while(l>=1 && r <= sum[n])
	{
		int j=0;
		while(l > sum[j])
		{
			j++;
		}
		x=c[j];
		xa=j;
		j=0;
		while(r > sum[j])
		{
			j++;
		}
		y=c[j];
		ya=j;
		if(x != y)
		{
			ans+=min(l-sum[xa-1],sum[ya]-(y-1));
		}
		l-=min(l-sum[xa-1],sum[ya]-(y-1));
		r+=min(l-sum[xa-1],sum[ya]-(y-1));
	}
	cout << ans;
	return 0;
}
