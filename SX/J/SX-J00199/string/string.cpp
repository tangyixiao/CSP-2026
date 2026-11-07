#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, l;

struct node {
	ll a;
	char x;
} arr[200005], brr[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i].a >> arr[i].x;
		l += arr[i].a;
	}
	l = (l + 1) / 2;
	for (int i = n; i >= 1; i--)
		brr[i].a = arr[n + 1 - i].a, brr[i].x = arr[n + 1 - i].x;
	ll i = 1, j = 1, xx = 0, ans = 0;
	while (xx < l && i <= n && j <= n) {
		if (arr[i].x == brr[j].x) {
			if (arr[i].a < brr[j].a) {
				if (xx + arr[i].a < l)
					i++, brr[j].a -= arr[i - 1].a, xx += arr[i - 1].a;
				else
					break;
			} else if (arr[i].a == brr[j].a)
				i++, j++;
			else {
				if (xx + brr[j].a < l)
					j++, arr[i].a -= brr[j - 1].a, xx += brr[j - 1].a;
				else
					break;
			}
		} else {
			if (arr[i].a < brr[j].a) {
				if (xx + arr[i].a < l)
					xx += arr[i].a, ans += arr[i].a, i++, brr[j].a -= arr[i - 1].a;
				else {
					ans += l - xx;
					break;
				}

			} else if (arr[i].a == brr[j].a) {
				if (xx + arr[i].a < l)
					xx += arr[i].a, ans += arr[i].a, i++, j++;
				else {
					ans += l - xx;
					break;
				}
			} else {
				if (xx + brr[j].a < l)
					xx += brr[j].a, ans += brr[j].a, j++, arr[i].a -= brr[j - 1].a ;
				else {
					ans += l - xx;
					break;
				}

			}
		}
	}
	cout << ans;
	return 0;
}
