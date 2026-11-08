#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200005],ans;
struct node{
	int er[35];
	int len;
}ax[200005];
bool cmp(long long x,long long y) {return x>y;}
void zhuan(long long x,int i)
{
	while (x)
	{
		ax[i].er[++ax[i].len]=x%2;
		x/=2;
	}
}
int yes[40];
bool bj[40];
long long ksm(long long x,int y)
{
	long long sume=1;
	while (y)
	{
		if (y%2==1) sume*=x;
		x=x*x;
		y/=2;
	}
	return sume;
}
int main()
{
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++) zhuan(a[i],i);
	for (int len=31;len>=1;len--)
	{
		for (int i=1;i<=n;i++) if (ax[i].er[len]==1) yes[len]++;
		if (yes[len]>=m) bj[len]=1;
	}
	for (int i=31;i>=1&&m;i--) if (yes[i]>=m) ans+=ksm(2,i-1),m--;
	cout<<ans;
	return 0;
}
