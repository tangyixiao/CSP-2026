# include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n + 1, 0);
	vector<int> b;
	
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		b.push_back(a[i]);
	}
	
	
	for (int i = 1; i <= n; ++i) {
		int result = 0;
		for (int i = 1; i <= n; ++i) {
			if (b[i] == b[i + 1]) {
				result++;
			}
		}
		
		cout << result << '\n';
	}
	
	return 0;
}
