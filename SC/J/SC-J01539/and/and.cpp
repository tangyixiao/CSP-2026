#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;

int n,m;
int a[N];
bool vis[N], visx[N];
int ans;

signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(a[i],mx);
		vis[i]=true;
	}
	for(int x=30;x>=0;x--){
		int na=0;
		for(int i=1;i<=n;i++){
			visx[i]=false;
			if(((1<<x)&a[i])&&vis[i]) na++;
			else visx[i]=true;
		}
		if(na>=m){
			ans+=(1<<x);
			for(int i=1;i<=n;i++) if(visx[i]) vis[i]=false;
		}
	}
	cout<<ans;
	return 0;
}