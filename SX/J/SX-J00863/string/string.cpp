#include <bits/stdc++.h>
using namespace std;
int n;

struct wen {
	int ge;
	char eng;
} a[200010];

int main() {
	long long s;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	scanf("%d", &n);
	char f;
	for (int i = 1; i <= n; i++) {
		scanf("%d%c%c", &a[i].ge, &f, &a[i].eng);
	}
	for (int i = 1, j = n; i < j;) {
		int c = min(a[i].ge, a[j].ge);
		if (a[i].eng != a[j].eng) {
			s += c;
		}
		a[i].ge -= c;
		a[j].ge -= c;
		if (a[i].ge == 0) {
			i++;
		} else {
			j--;
		}

	}
	cout << s;
	return 0;
}