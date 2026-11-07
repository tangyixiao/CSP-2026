#include<bits/stdc++.h>
#define int long long
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,l,r) for(int i=l;i>=r;i--)
#define pb push_back
#define ull unsigned long long
using namespace std;
const int N=5e5+5;
int n,m;
int a[N];
int p[N];
int pre[N];
int lst[N];
int cnt[N];
int ans[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	rep(i,1,n){
		cin>>a[i];
		lst[a[i]]=i;
	}
	rep(i,1,n){
		int pos=i;
		cnt[i]++; 
		ans[a[pos]]+=cnt[i];
		cnt[lst[a[pos]]+1]+=cnt[i];
	}
	rep(i,1,m)cout<<ans[i]<<" ";
	return 0;
}
