#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 5e5 + 5;

int n, m;
int ans[N];
vector<int> a;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	cin >> n >> m;
	bool f = 0;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
//	if (f == 0) {
//		
//	}
	for (int i = 1; i <= n; i++) { // nÂÖ 
		vector<int> b;
//		vector<int> tmp;
		map<int, int> mp;
		int j = 1;
		int cntt = 1;
		for (int xxx = i - 1; xxx < a.size(); xxx++) {
			int x = a[xxx];
			if (!mp[x]) {
				b.push_back(x);
				mp[x] = j;
			} else {
				for (int k = mp[x]; k < b.size(); k++) {
					mp[b[k]] = 0;
//					tmp.push_back(b[i]);
				}
				mp[x] = j;
				b.push_back(x);
			}
			j++;
//			cerr << x << endl;
		}
		for (int i = 1; i <= m; i++) {
			if (mp[i]) ans[i]++;
		}
//		for (int x : tmp) cout << x << " ";
//		cout << endl;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i];
		if (i < m) cout << " ";
	}
	return 0; 
}
