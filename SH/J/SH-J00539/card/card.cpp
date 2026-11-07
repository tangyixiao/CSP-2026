#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5 + 5;
const ll inf = 1e18;
int n, m, a[N];
int en[N], dp[N], tot;
int cnt[N], cntt[N];

vector<int> v[N];

void solve() {
	cin>>n>>m;
	for(int i = 1; i <= n; i++) {
		cin>>a[i];
		en[a[i]] = i;
	}

	for(int st = n; st; st--) {
		int p = en[a[st]];
		if(p == st) {
			dp[p] = ++tot;
			while(p <= n){
				if(en[a[p]] == p){
					v[tot].push_back(a[p]);
					p++;
				} else {
					p = en[a[p]];
				}
			}
			cntt[tot] = 1;
		} else {
			cntt[dp[p]]++;
		}
	}

	for(int i = 1; i <= tot; i++) {
		for(auto j : v[i]) {
			cnt[j] += cntt[i];
//			cout<<j<<" "<<cntt[i]<<"\n";
		}
	}

	for(int i = 1; i <= m; i++) cout<<cnt[i]<<" ";

}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}

//10 3
//3 1 2 1 3 2 3 1 2 1
