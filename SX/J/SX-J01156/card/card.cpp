#include <bits/stdc++.h>
using namespace std;

struct a {
	int sum;
	bool h;
	int pla;
} a[5005];
int b[5005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdin);
	int n, m;
	cin >> n >> m;
	int w = 0, maxx = 0;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		if (b[i] > maxx)
			maxx = b[i];
		a[b[i]].sum++;
		if (a[b[i]].sum == 2)
			a[b[i]].sum--;
	}
	for (int i = 0; i < n; i++) {
		w = i;
		for (int j = i; j < n; j++) {
			if (a[b[j]].h == 0) {
				a[b[j]].h = 1;
				a[b[j]].pla = w;
				w++;
			} else {
				if (a[b[j]].pla < w) {
					w = a[b[j]].pla;
					w++;
				} else
					w++;
			}
		}
		w--;
		for (int j = i; j < w; j++)
			a[j].sum++;
		for (int j = 0; j <= maxx; j++) {
			a[b[j]].h = 0;
		}
	}
	for (int i = 0; i < maxx; i++) {
		if (a[i].sum != 0)
			cout << a[i].sum - 1 << " ";
	}
}
