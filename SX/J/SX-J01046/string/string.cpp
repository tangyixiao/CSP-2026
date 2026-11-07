#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);



	int n = 0;
	cin >> n;
	int i[200005] = {0};
	char c[200005];
	for (int j = 0; j < n; j++) {
		cin >> i[j];
		cin >> c[j];
	}
	long long cnt = 0;
	int n1 = 0, n2 = n - 1;
	while (n1 < n2) {
		int j = min(i[n1], i[n2]);
		i[n1] -= j;
		i[n2] -= j;
		if (c[n1] != c[n2]) {
			cnt += j;
		}
		if (i[n1] == 0) {
			n1++;
		}
		if (i[n2] == 0) {
			n2--;
		}
	}
	cout << cnt;



	fclose(stdin);
	fclose(stdout);
	return 0;
}
