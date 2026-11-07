#include <bits/stdc++.h>

using namespace std;
const int N = 5e5 + 5;
int n, a[N],m;
int ans[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		stack<int> tmp;
		map<int, int> mp;
		for (int j = i; j <= n; j++) {
			if(mp[a[j]] == 0) {
				tmp.push(a[j]);
				mp[a[j]] += 1;
			}else {
				while(!tmp.empty() && tmp.top() != a[j]) {
					mp[tmp.top()] -= 1;
					tmp.pop();
				}
			}
		}
		while(!tmp.empty()) {
			ans[tmp.top()]++;
			tmp.pop();
		}
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	return 0;
}
