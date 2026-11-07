#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,m;
const int N=2e5+5;
int a[N];
int ans,sum=0;
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
	ans=a[1];
	for(int i=1;i<=n;i++)
	{
		ans=ans&a[i];
		sum++;	
		if(sum==m) {cout<<ans<<endl;return 0;}	
	}
	cout<<ans;
	return 0;
}
