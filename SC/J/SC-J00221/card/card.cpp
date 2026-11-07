#include <iostream>

using namespace std;

const int N = 5e5 + 5;

int n, m, a[N], t[N], w[N], top, st[N], ans[N];
bool sp = true;

int main()
{
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1]) sp = false;
	}
	
	if (sp) {
		for (int i = 1; i <= n; i++) {
			if (a[i] != a[i + 1]) t[a[i]] = i;
		}
		for (int i = 1; i <= m; i++) {
			cout << t[i] << ' ';			
		}
		return 0;
	}
	
	for (int i = 1; i <= n; i++) {
		top = 0;
		for (int j = 1; j <= m; j++) t[j] = 0;
		for (int j = i; j <= n; j++) {
			if (t[a[j]] != 0) {
				for (int k = t[a[j]] + 1; k <= top; k++) t[st[k]] = 0;
				top = t[a[j]];
			} else {
				st[++top] = a[j];
				t[a[j]] = top;
			}
		}
		for (int j = 1; j <= m; j++) {
			if (t[j]) ans[j]++;
		}
	}
	
	for (int j = 1; j <= m; j++) {
		cout << ans[j] << ' ';
	}
	
	return 0;
}