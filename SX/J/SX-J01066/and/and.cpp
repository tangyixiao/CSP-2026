#include <iostream>
#include <vector>
using namespace std;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 1 + 1; j < a.size(); j++) {
			if (max < (a[i] & a[j])) {
				max = a[i] & a[j];
			}
		}
	}
	cout << max;
	return 0;
}