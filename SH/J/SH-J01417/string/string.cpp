#include <iostream>

using namespace std;

const int N = 2e5 + 10; 

int n;
int a[N];
char ch[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> ch[i];
	int l = 1, r = n;
	long long ans = 0;
	while (l <= r) {
		if (ch[l] == ch[r]) {
			if (a[l] > a[r]) a[l] -= a[r--];
			else if (a[l] < a[r]) a[r] -= a[l++];
			else l++, r--;
		} else {
			if (a[l] > a[r]) ans += a[r], a[l] -= a[r--];
			else if (a[l] < a[r]) ans += a[l], a[r] -= a[l++];
			else ans += a[l], r--, l++;
		}
	}
	cout << ans << "\n";
	return 0;
}
