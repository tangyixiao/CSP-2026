#include<bits/stdc++.h>
using namespace std;
int  t[100005];
vector <int>a(10005);
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, ans = 0, cnt = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
			if (a[i] == a[1]) {
				ans++;
			} else {
				cnt++;
			}

			if (ans == 2 ) {
				a.clear();
				ans = 0;
			}
			if (cnt == 2 ) {
				a.clear();
				cnt = 0;
			}
			a.push_back(a[i]);
}
			for (int k = 0; k < a.size(); k++) {
				t[a[k]]++;
			}
		
	for (int i = 1; i <= m; i++) {
		cout << t[i] << " ";
	}
	return 0;
}