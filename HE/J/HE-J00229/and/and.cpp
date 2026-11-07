#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+50;
ll n,m,ans=0;
int a[N];
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	ans=a[1]&a[2];
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<endl;
	for(int i=3;i<=m;i++)
		ans=ans&a[i];
	cout<<ans;
	return 0;
}
