#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e6+5;
struct node
{
	int fl,x;
}a[N];
bool cmp(node x,node y)
{
	return x.fl>y.fl;
}
signed main()
{
 	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].x;
	}
	int ans=1;
	for(int k=0;k<=32;k++)
	{
		for(int i=1;i<=n;i++)
		{
			if((a[i].x&ans)==ans) 
			{
				a[i].fl=(ans+a[i].fl)*1ll;
			}
		}
		ans=2*ans*(1ll);
	} 
	sort(a+1,a+n+1,cmp);
	int cnt=a[1].x;
	for(int i=2;i<=m;i++)
	{
		cnt&=a[i].x;
	}
	cout<<cnt;
	return 0;
}

