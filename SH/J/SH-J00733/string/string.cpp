#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,n,ans,u;
char v;
vector<pair<int,char>> uv;
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
		cin >> u >> v,uv.push_back({u,v});
	int l = 0,r = uv.size()-1; 
	for(;l < r;){
		int mn = min(uv[l].first,uv[r].first);
		if(uv[l].second != uv[r].second)
			ans += mn;
		uv[l].first -= mn,uv[r].first -= mn;
		if(uv[l].first == 0)l++;
		if(uv[r].first == 0)r--;
	}cout << ans;
}
