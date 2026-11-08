#include<bits/stdc++.h>
#define ll long long
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define endl '\n'
#define pii pair<int, int>
using namespace std;
const int N = 2e5 + 5;
ll a[N];
int one[N][35];
int cntt[N];
void init(int k) {
	int cnt = 0;
	while(a[k]) {
		one[k][++cnt] = a[k] % 2;
		if(a[k] % 2) cntt[cnt]++;
		a[k] /= 2;
	}
}
bool vis[N][35];
int n, m;
int main () {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	fastio;
	cin >> n >> m;
	ll maxn = 0;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		maxn = max(a[i], maxn);
		init(i);
	}
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= 31;j ++) {
//			cout << one[i][j] << " ";
//		}
//		cout << endl;
//	}
	int f = 0;
	ll ans = 0;
	int mm = 0;
	vector<int> id;
	for(int i = 1; i <= n; i++) {
		id.push_back(i);
	}
	for(int j = 31; j >= 1; j--) {
		int last = -1;
		vector<int> tmp;
		if(cntt[j] < m) continue;
		for(auto p : id) {
			if(one[p][j]) {
				tmp.push_back(p);
			}
		}
		if(tmp.size() < m) continue;
		else {
			ans += pow(2, j - 1);
			id = tmp;
		}
	}
	//if(m < 2) cout << maxn << endl;
	cout << ans << endl;
	return 0;
}

