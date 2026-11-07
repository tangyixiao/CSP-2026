#include <iostream>
using namespace std;
int a, b[200005], c[200005];
long long f = 0, j = 0;
char d[200005], e[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> a;
	for (int i = 1; i <= a; i++) {
		int n;
		cin >> n >> d[i];
		f += n;
		b[i] = f;
		e[a + 1 - i] =  d[i];
	}
	int g = 1, h = 1;
	for (long long i = 1; i < f; i) {
		c[h] = f - b[a - h];
		i = min(b[g], c[h]);
		if (d[g] != e[h]) {
			if (b[g] > c[h])
				j += (c[h] - c[h - 1]);
			else
				j += (b[g] - b[g - 1]);
		}
		if (b[g] > c[h])
			h += 1;
		else if (b[g] < c[h])
			g += 1;
		else if (g < h)
			g += 1;
		else if (h < g)
			h += 1;
		else {
			g += 1;
			h += 1;
		}
		cout << h << ' ' << g << endl;
	}
	cout << j / 2;
	return 0;
}
