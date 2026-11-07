#include <bits/stdc++.h>
using namespace std;

struct Node {
	int num;
	char c;
} a[200005];
long long sum, cs;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int x;
	cin >> x;
	for (int p = 1; p <= x; p++) {
		cin >> a[p].num >> a[p].c;
		sum += a[p].num;
	}
	int i = 1, j = x;
	while (sum != 0 && sum != 1) {
		if (a[i].num == 0)
			i++;
		if (a[j].num == 0)
			j--;
		if (a[i].c == a[j].c) {
			sum -= 2;
			a[i].num--;
			a[j].num--;
		}
		if (a[i].c != a[j].c) {
			cs++;
			sum -= 2;
			a[i].num--;
			a[j].num--;
		}
	}
	cout << cs;
	return 0;
}
/*
2
2 a
3 a
*/
