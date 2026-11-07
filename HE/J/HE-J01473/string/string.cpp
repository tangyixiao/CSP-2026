#include <bits/stdc++.h>

using namespace std;

int n;
int a[200005];
char c[200005];
long long ans;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	int i = 1, j = n;
	for (; i <= j;) {
		if (c[i] != c[j]) {
			if (a[i] > a[j]) {
				ans += a[j];
				a[i] -= a[j];
				a[j] = 0;
				j--;
			}else if (a[i] == a[j]){
				ans += a[j];
				a[i] = a[j] = 0;
				i++, j--;
			} else {
				ans += a[i];
				a[j] -= a[i];
				a[i] = 0;
				i++;
			}
		} else {
			if (a[i] > a[j]) {
				a[i] -= a[j];
				a[j] = 0;
				j--;
			} else if (a[i] == a[j]) {
				a[i] = a[j] = 0;
				i++, j--;
			} else {
				a[j] -= a[i];
				a[i] = 0;
				i++;
			}
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

