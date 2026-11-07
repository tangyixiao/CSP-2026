#include <bits/stdc++.h>

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	int n, m;
	std::cin >> n >> m;
	std::vector <int> a(n);
	for(int& i : a) {
		std::cin >> i;
	}
	std::vector <int> num(m + 1, 0);
	for(int i = 0; i < n; i++) {
		num[a[i]]++;
	}
	bool flag = true;
	for(int i = 0; i < n; i++) {
		if(num[a[i]] > 1) {
			flag = false;
			break;
		}
	}
	for(int i = 1; i < n; i++) {
		if(a[i - 1] > a[i]) {
			flag = false;
			break;
		}
	}
	std::vector <int> cnt(m + 1, 0);
	if(flag) {
		for(int i = 0; i < n; i++) {
			cnt[a[i]] = std::max(cnt[a[i]], i);
		}
		for(int i = 1; i <= m; i++) {
			std::cout << cnt[i];
			if(i != m) {
				std::cout << " ";
			}
		}
		return 0;
	}
	std::vector <bool> vis(m + 1, false);
	std::vector <int> v;
	for(int j = 0; j < n; j++) {
		v.clear();
		for(int i = 1; i <= m; i++) {
			vis[i] = false;
		}
		for(int i = j; i < n; i++) {
			if(vis[a[i]]) {
				while(!v.empty() && v.back() != a[i]) {
					vis[v.back()] = false;
					v.pop_back();
				}
			} else {
				vis[a[i]] = true;
				v.push_back(a[i]);
			}
		}
		for(int i : v) {
			cnt[i]++;
		}
	}
	for(int i = 1; i <= m; i++) {
		std::cout << cnt[i];
		if(i != m) {
			std::cout << " ";
		}
	}
	return 0;
}