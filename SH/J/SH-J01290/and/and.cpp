#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ans;
int a[200005];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<a[n]<<" "<<a[n-1]<<endl;
	int temp=n-1;
	ans=a[n];
	while(temp>=0)
	{
		ans=ans&a[temp];
		temp-=1;
	}
	cout<<ans;
}
