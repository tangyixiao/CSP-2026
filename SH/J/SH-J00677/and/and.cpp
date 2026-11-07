#include<bits/stdc++.h>
using namespace std;
struct number
{
	long long num;
	long long cha;
	long long erjinzhishu;
}a[200010];
vector<long long> po;
long long er(long long x)
{
	long long l=0,r=po.size()-1;
	long long res=0;
	while(l<=r)
	{
		long long mid=l+r>>1;
		if(po[mid]==x) return 0;
		else if(po[mid]>x)
		{
			res=po[mid]-x;
			r=mid-1; 
		}
		else
		{
			l=mid+1;
		}
	}
	return res;
}
bool cmp(number a,number b)
{
	if(a.erjinzhishu!=b.erjinzhishu)
	{
		return a.erjinzhishu>b.erjinzhishu;
	}
	else
	{
		return a.cha<b.cha;
	}
}
int main()
{
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long maxn=LLONG_MIN;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i].num;
		maxn=max(maxn,a[i].num);
	}
	for(long long now=1;now<=maxn;now*=2)
	{
		po.push_back(now-1);
	}
	for(long long i=1;i<=n;i++)
	{
		a[i].cha=er(a[i].num);
		a[i].erjinzhishu=a[i].num+a[i].cha+1;
	}
	sort(a+1,a+1+n,cmp);
	long long res;
	for(long long i=1;i<=m;i++)
	{
		if(i==1) res=a[i].num;
		else res=(res&a[i].num);
	}
	cout<<res;
	
	return 0;
 } 
