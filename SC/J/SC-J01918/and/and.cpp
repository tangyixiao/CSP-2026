#include<bits/stdc++.h>
#define int long long
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,l,r) for(int i=l;i>=r;i--)
#define pb push_back
#define ull unsigned long long
using namespace std;
const int N=2e5+5;
int n,m;
int a[N];
int vis[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	int ans=0;
	rep(i,1,n)cin>>a[i];
	per(j,30,0){
		int cnt=0;
		rep(i,1,n){
			if(vis[i])continue;
			if(a[i]&(1ll<<j))cnt++;
		}
		if(cnt>=m){
			rep(i,1,n){
				if(!(a[i]&(1ll<<j)))vis[i]=1;
			}
			ans+=(1ll<<j);
		}
	}
	cout<<ans;
	return 0;
}
