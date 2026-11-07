#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 200050;
vector<long long> v[2];
long long t = 1,n,m,data1[MAXN],ans,cnt;
inline void solve();
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	while (t --){
		solve();
	}
	return 0;
}
inline void solve(){
	cin >> n >> m;
	for (long long i = 1;i <= n;i ++){
		cin >> data1[i];
		v[1].push_back(data1[i]);
	}
	for (long long i = 30;i >= 0;i --){
		cnt = 0;
		v[i & 1].clear();
		for (long long j = 0;j < v[(i + 1) & 1].size();j ++){
			cnt += ((v[(i + 1) & 1][j] & (1ll << i)) == (1ll << i));
		}
		if (cnt >= m){
			ans += (1ll << i);
			for (long long j = 0;j < v[(i + 1) & 1].size();j ++){
				if ((v[(i + 1) & 1][j] & (1ll << i)) == (1ll << i)){
					v[i & 1].push_back(v[(i + 1) & 1][j]);
				}
			}
		} else {
			for (long long j = 0;j < v[(i + 1) & 1].size();j ++){
				v[i & 1].push_back(v[(i + 1) & 1][j]);
			}
		}
	}
	cout << ans << '\n';
	return ;
}