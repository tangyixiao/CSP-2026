#include <bits/stdc++.h>

using namespace std;
int n, m, sum = 0, cnt = 0;
int a[500000], b[500000], c[300000],d[300000];

int main() {
//	freopen("card.in", "r", stdin);
//	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int y = 0; y < i; y++) {
			if (a[i] != a[y]) {
				for (int z = 0; z <= cnt; z++) {
					if (a[i] != c[z]) {
						c[cnt] = a[i];
						cnt++;
					}
				}
			}
		}
	}
	for (int z = 0; z <= cnt; z++) {
		for (int i = 0; i <= z; i++) {
			if (c[z] < c[i])
				swap(c[z], c[i]);
		}
	}
	for(int e=0;e<n;e++)
	{sum=e;
		for (int i = 0; sum < n; i++) {

		b[i] = a[sum];
		for (int y = 0; y < i; y++) {
			if (b[y] == a[sum]) {
				for (int x = i ; x > y; x--) {
					b[x] = 0;
				}
			}
			i = y;
		}
		sum++;
	}
	for (int g = 0; g < n; g++) {
		for (int z = 0; z <= cnt; z++) {
		if(b[g]==c[z])
		d[z]++;
		}
	}
	}
	for (int z = 0; z <= cnt; z++) {
		cout<<d[z];
		}

	return 0;
}
