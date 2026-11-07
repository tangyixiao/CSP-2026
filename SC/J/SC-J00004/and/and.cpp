#include <iostream>
#include <vector>

using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	
	vector<int> a(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	
	int ans = 0;
	if (m == n) {
		ans = a[1];
		for (int i = 2; i <= n; ++i) {
			ans &= a[i];
		}
	} else if (m == 1) {
		ans = 0;
		for (int i = 1; i <= n; ++i) {
			ans = max(ans, a[i]);
		}
	}
	
	cout << ans << endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}