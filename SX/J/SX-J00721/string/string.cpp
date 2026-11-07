#include <iostream>
using namespace std;


int main() {
	freopen("string.in", "r", stdin);
	int n;
	string  s1 = {0};
	char c;
	cin >> n;
	int s;
	for (int i = 1; i <= n; i++) {
		cin >> s >> c;
		for (int j = 1; j <= s; j++) {
			s1 += c;
		}
	}



	int j = 0, ans = 0;
	for (int i = (s1.size() - 1) / 2; i >= 0; i--) {
		if (s1[i] !=  s1[j]) {
			ans++;
		} else {
			;
		}
		j++;
	}
	cout << ans;
	freopen("string.out", "w", stdout);
	return 0;
}
