#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define pii pair<int,int>
#define F_up(x,y,z) for(int x=y;x<=z;x++)
#define F_down(x,y,z) for(int x=y;x>=z;x--)
#define F_in(x,y) for(auto x:y)
#define W(t) while(t--)
#define WALL while(1)
using namespace std;
int n,m;
int a[500005];
int cnt[500005],nxt[500005];
int ans[500005],sum[500005];
vector<int> from[500005];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	F_up(i,1,n){
		cin>>a[i];
	}F_down(i,n,1){
		ans[i]++;
		cnt[a[i]]=max(cnt[a[i]],i);
		nxt[i]=max(cnt[a[i]],i+1);
		if(i!=n) from[nxt[i]].push_back(i);
		if(i==n) nxt[i]=-1;
	}F_up(i,1,n){
		F_in(frm,from[i]){
			ans[i]+=ans[frm];
		}sum[a[i]]=max(sum[a[i]],ans[i]);
	}F_up(i,1,m){
		cout<<sum[i]<<' ';
	}
	return 0;
}
