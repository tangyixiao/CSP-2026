#include <iostream>

using namespace std;
using ll = long long;
int n,m,cnt[500005],sum[300005],a[500005];
bool is[500005],vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1;i <= n;++i) cin >> a[i];
	for (int i = n;i;--i)
		if (!vis[a[i]]) 
			is[i] = vis[a[i]] = 1;
	for (int i = 1;i <= n;++i){
		cnt[i] = 1;
		if (is[i - 1]) cnt[i] += sum[a[i - 1]];
		sum[a[i]] += cnt[i];
	}
	for (int i = 1;i <= m;++i) cout << sum[i] << ' ';
	return 0;
}