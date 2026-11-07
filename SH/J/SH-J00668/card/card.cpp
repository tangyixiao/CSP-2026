#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5 * 1e5 + 1;
int n,m;
long long a[MAXN],cnt[MAXN],sum[MAXN];
vector<long long> v;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) {
		v.clear();
		memset(cnt,0,sizeof(cnt));
		for(int j = i; j <= n; j++) {
			if(cnt[a[j]]) {
				for(int k = 0; k < int(v.size()); k++) {
					if(v[k] == a[j]) {
						vector<long long> v_;
						v_.clear();
						for(int t = 0; t < k; t++) v_.push_back(v[t]);
						for(int t = k + 1; t < int(v.size()); t++) {
							cnt[v[t]]--;
						}
						v.swap(v_);
						v.push_back(a[j]);
						break;
					}
				}
			} else {
				v.push_back(a[j]);
				cnt[a[j]]++;
			}
		}
		for(int t : v) {
			sum[t]++;
		}
	}
	for(int i = 1; i <= m; i++) {
		cout << sum[i] << ' ';
	}
	return 0;
}
