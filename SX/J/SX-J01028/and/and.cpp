#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200005],ans,p[200005][35],cnt[200005];
vector<int>v[200005],tmp;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		for(int j=1;j<=32;j++)
			if(a[i]>>j-1&1)
				p[i][++cnt[i]]=j,v[j].push_back(i);
	}
	for(int i=32;i>=1;i--){
		if(v[i].size()<m) continue;
		ans+=(1ll<<i-1);
		tmp=v[i];
		for(int j=1;j<=32;j++) v[j].clear();
		for(auto x:tmp){
			while(p[x][cnt[x]]>=i) cnt[x]--;
			v[p[x][cnt[x]]].push_back(x);
		}
	}
	cout<<ans;
	return 0;
}