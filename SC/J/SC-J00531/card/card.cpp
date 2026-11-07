#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5, A = 1.5e6 + 5;
int a[N];
int ans[A];
bool d[A];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++) {
		memset(d, 0, sizeof d);
		vector<int> v;
		for(int j = i; j <= n; j++) {
			if(d[a[j]] == false) {
				v.push_back(a[j]);
				d[a[j]] = true;
				ans[a[j]]++;
			} else {
				int pos = -1;
				for(int k = 0; k < v.size(); k++) {
					if(v[k] == a[j]) {
						pos = k;
						break;
					}
				}
				for(int k = pos + 1; k < v.size(); k++) {
					d[v[k]] = false;
					ans[v[k]]--;
				}
				while(v.size() > pos + 1) v.pop_back();
			}
		}
	}
	for(int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
}