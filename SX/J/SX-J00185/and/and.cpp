#include <bits/stdc++.h>
using namespace std;
int n, m, nums[100010], ands[100010], maxn = INT_MIN;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> nums[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (maxn < (nums[i] & nums[j])) {
				maxn = (nums[i] & nums[j]);
			}
		}
	}
	printf("%d\n", maxn);
	return 0;
	fclose(stdin);
	fclose(stdout);
}
