#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int a[200005],n,m,ans; 
bool check(int x)
{
	int cur=a[1],cnt=1;
	if(cur<x) 
		return false;
	for(int i=2;i<=n;i++)
	{
		if(cur&a[i]<x) 
			continue;
		cur&=a[i];
		cnt++;
	} 
	if(cnt<m)return false;
	return true;
}
bool cmp(int t1,int t2)
{
	return t1>t2;
} 
//傻到极致的我又又又忘记sort的greater怎么写了 
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,cmp);
	int l=0,r=a[1];
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(check(mid))
		{
			ans=mid;
			l=mid+1;
		}
		else
			r=mid-1;
	}
	cout<<ans<<endl;
	return 0;
}
//哎我真是逊爆了感觉T3都只能40~100，两个大洋里全WA，绷不住 
