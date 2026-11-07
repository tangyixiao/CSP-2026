#include <bits/stdc++.h>
using namespace std;
int n;
const int N = 1e8+5;
char huiwen[N];

int main() {
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin >> n;
	int ans = 0, num = 0;
	for (int i = 1; i <= n; i++) {
		int a;
		char c;
		cin >> a >> c;
		for (int j = num + 1; j <= num + a; j++) {
			huiwen[j] = c;
		}
		num += a;
	}
	int l = 1;
	int r = num;
	while (l < r) {
		if (huiwen[l] != huiwen[r]) {
			ans++;
		}
		l++;
		r--;
	}
	cout << ans << endl;
	return 0;
}