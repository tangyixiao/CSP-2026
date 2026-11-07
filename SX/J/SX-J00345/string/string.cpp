#include <bits/stdc++.h>
using namespace std;

struct stfing {
	int shu;
	char zi;
};
stfing a[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].shu >> a[i].zi;
	}
	if (n <= 1) {
		printf("0");
		return 0;
	}
	if (n <= 2) {
		if (n == 1) {
			printf("0");
			return 0;
		} else {
			printf("%d", min(a[1].shu, a[2].shu));
		}
	}
	
	return 0;
}
