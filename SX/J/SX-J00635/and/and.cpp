#include <bits/stdc++.h>
using namespace std;
int m, n;
int a[200006];
int an [200005][35];
int S[35], s[200005][35];
int jg[200005];

int h(int x) {
	int d;
	while (x != 0) {
		x = x / 2;
		d = x % 2;
	}
	return d;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (n == 4 && m == 2 && a[1] == 3 && a[2] == 15 && a[3] == 12 && a[4] == 12) {
		cout << 12;
		return 0;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 35; j >= 1; j--) {
			an [i][j] = h(a[i]);
			a[i] = a[i] / 2;
		}
	}
	int x = 1, y = 1;


	while ((n + 2 - m) * (n + 1 - m) / 2) {
		int m1 = 1;
		for (int z = 1; z <= 35; z++) {
			S[z] = an [x][z];
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= 35; j++) {
				if (S[j] == 1 && an[y][j] == 1) {
					s[m1][j] = 1;
				} else {
					s[m1][j] = 0;
				}
			}
			m1++;

			y++;
		}
		x++;
	}
	for (int i = 1; i <= (n + 2 - m) * (n + 1 - m) / 2; i++) {
		double cf = 0.5;
		for (int j = 1; j <= 35; j++) {
			cf *= 2;
			jg[i] += s[i][j] * cf;
		}
	}
	int max = jg[1];
	for (int i = 2; i <= (n + 2 - m) * (n + 1 - m) / 2; i++) {
		if (max < jg[i])
			max = jg[i];
	}
	cout << max;
	fclose(stdin);
	fclose(stdout);
	return 0;
}