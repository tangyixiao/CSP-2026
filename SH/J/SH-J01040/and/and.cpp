#include<bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(int x,int y)
{
	return x>y;
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m,mx=0,maxx=0;
	cin>>n>>m;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	if(m==1)
		cout<<mx;
	int ans;
	sort(a.begin()+1,a.end(),cmp);
	for(int i=1;i<=n-m+1;i++)
	{
		ans=a[i+m-1] & a[i];
		maxx=max(maxx,ans);
	}
	cout<<maxx;
}
