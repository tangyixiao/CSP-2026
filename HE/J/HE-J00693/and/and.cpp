#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=4e5+10;
int n,m;
int a[N];
struct node{int val,id;
}sum[N];
bool cmp(node x,node y){return x.val>y.val;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=31;i>=0;i--)
	{

		int fl=0;
		for(int j=1;j<=n;j++)
		{
			if(((a[j]>>i)&1)==1)sum[j].val+=(1ll<<i),sum[j].id=j,fl++;
		}
		if(fl==1)
		{
			for(int j=1;j<=n;j++)
			{
				if(((a[j]>>i)&1)==1)sum[j].val-=(1ll<<i),sum[j].id=j,fl++;
			}
		}
	}
	sort(sum+1,sum+1+n,cmp);
	int ans=a[sum[1].id];
	for(int i=2;i<=m;i++)ans&=a[sum[i].id];
	cout<<ans;
	return 0;
}
