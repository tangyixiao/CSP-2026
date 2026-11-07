#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n, cnt = 0;
struct ea
{
	long long num;
	char c;
}a[N];
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i].num >> a[i].c;
	int l = 1, r = n;
	while (l < r)
	{
		if (a[l].num >= a[r].num) {
			a[l].num -= a[r].num;
			if (a[l].c != a[r].c) {
				cnt += a[r].num;
			}
			r--;
		} else {
			a[r].num -= a[l].num;
			if (a[l].c != a[r].c) {
				cnt += a[l].num;
			}
			l++;
	    }
	}
	cout << cnt;
	return 0;
}