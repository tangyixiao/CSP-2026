#include <bits/stdc++.h>
using namespace std;
char c;
long long a, n, sum, ans, mj, jm;
int b[200005];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		sum += a;
		ans++;
		b[i] = c;
	}
	for (int i = 1; i <= n ; i++) {
		if (b[i] == b[i + 1]) {
			jm++;
		}
	}
	jm += 1;
	if (jm != ans) {
		mj = sum / 2;
		cout << mj;
	} else {
		cout << "0";
	}


	return 0;
}