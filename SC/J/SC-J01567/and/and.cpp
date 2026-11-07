#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN=2e5+5;
int n,m;
int a[MAXN],vis[MAXN],maxa=-1,ans=-1,maxall=-1;
bool flagb=true;
vector<int> path;
void dfs(int pos,int x) {
	if(pos==m) {
		int res=a[path[0]];
		for(int i=1; i<path.size(); ++i) {
			res=res&a[path[i]];
		}
		ans=max(ans,res);
		return ;
	}
	for(int i=x+1; i<=n; ++i) {
		if(vis[i]==0) {
			vis[i]=1;
			path.push_back(i);
			dfs(pos+1,i);
			path.pop_back();
			vis[i]=0;
		}
	}
}
signed main() {
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; ++i) {
		cin>>a[i];
		if(a[i]!=i-1) flagb=false;
		maxa=max(maxa,a[i]);
	}
	if(flagb==true) {
		cout<<0;
		return 0;
	}
	if(m==1) {
		cout<<maxa;
		return 0;
	}
	if(m==2) {
		for(int i=1; i<=n; ++i) {
			for(int j=1; j<=n; ++j) {
				if(i!=j) {
					maxall=max(maxall,a[i]&a[j]);
				}
			}
		}
		cout<<maxall;
		return 0;
	}
	if(m==n) {
		int res=a[1];
		for(int i=2; i<=n; ++i) {
			res=res&a[i];
		}
		cout<<res;
		return 0;
	}
	dfs(0,0);
	cout<<ans;
	return 0;
}