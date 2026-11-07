#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n = 0, m = 0;
	int a[500005] = {0};
	int tong[300005] = {0};
	bool tong2[300005] = {0};
	int p[500005] = {0};
	int length = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (tong2[a[j]] == 1) {
				for (int i2 = 0; i2 < length; i2++) {
					if (p[i2] == a[j]) {
						for (int j2 = i2; j2 < length; j2++) {
							tong2[p[j2]] = 0;
							p[j2] = 0;
						}
						length = i2;
						break;
					}
				}
			}
			p[length] = a[j];
			length++;
			tong2[a[j]] = 1;
		}
		for (int j = 0; j < length; j++) {
			tong[p[j]]++;
			p[j] = 0;
		}
		length = 0;
	}
	for (int i = 1; i <= m; i++) {
		cout <<	tong[i] << ' ';
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}
